package ru.eventplanner.eventmanagementservice.participant;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import ru.eventplanner.eventmanagementservice.event.Event;
import ru.eventplanner.eventmanagementservice.event.EventNotFoundException;
import ru.eventplanner.eventmanagementservice.event.EventRepository;
import ru.eventplanner.eventmanagementservice.integration.notification_service.Notification;
import ru.eventplanner.eventmanagementservice.integration.notification_service.NotificationManager;

import java.time.LocalDateTime;
import java.util.List;

@Service
public class ParticipantService {

    private final ParticipantRepository participantRepository;
    private final EventRepository eventRepository;
    private final NotificationManager notificationManager;

    @Autowired
    public ParticipantService(ParticipantRepository participantRepository, EventRepository eventRepository, NotificationManager notificationManager) {
        this.participantRepository = participantRepository;
        this.eventRepository = eventRepository;
        this.notificationManager = notificationManager;
    }

    public Participant getById(ParticipantPK participantPK) {
        return participantRepository.findById(participantPK)
                .orElseThrow(() -> new ParticipantNotFoundException("Participant not found with pk: " + participantPK));
    }

    public Participant save(Participant participant) {
        return participantRepository.save(participant);
    }

    public List<Participant> findByUserId(Long userId) {
        return participantRepository.findByUserId(userId);
    }

    public List<Participant> findByEventId(Long eventId) {
        return participantRepository.findByEventId(eventId);
    }

    public void updateStatus(Participant participant) {
        if (participant.getStatus() == Participant.Status.ACCEPTED) {
            Event event = eventRepository.findById(participant.getEventId())
                    .orElseThrow(
                            () -> new EventNotFoundException(
                                    "Event with id %s not found"
                                            .formatted(participant.getEventId())
                            )
                    );

            Notification notification = Notification.builder()
                    .eventId(participant.getEventId())
                    .userId(participant.getUserId())
                    .message("""
                            Не забудьте про событие '%s'.
                            Начало события: %s.
                            Локация: %s"""
                            .formatted(
                                    event.getName(),
                                    event.getStartDateTime(),
                                    event.getLocation()
                            ))
                    .sendAt(event.getStartDateTime().minusHours(1L))
                    .build();

            notificationManager.postNotification(notification);
        }

        participantRepository.updateStatus(
                participant.getEventId(),
                participant.getUserId(),
                participant.getStatus()
        );
    }

    public void delete(Participant participant) {
        participantRepository.delete(participant);
    }

    public void deleteByEventId(Long eventId) {
        participantRepository.deleteByEventId(eventId);
    }
}
