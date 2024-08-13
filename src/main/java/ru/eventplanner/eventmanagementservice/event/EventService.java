package ru.eventplanner.eventmanagementservice.event;

import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import ru.eventplanner.eventmanagementservice.participant.Participant;
import ru.eventplanner.eventmanagementservice.participant.ParticipantRepository;

import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.List;
import java.util.Objects;
import java.util.Optional;

@Slf4j
@Service
public class EventService {
    private final EventRepository eventRepository;
    private final ParticipantRepository participantRepository;

    @Autowired
    public EventService(EventRepository eventRepository, ParticipantRepository participantRepository) {
        this.eventRepository = eventRepository;
        this.participantRepository = participantRepository;
    }

    public Event save(Event event) {
        Event savedEvent = eventRepository.save(event);
        Participant savedParticipant = new Participant(
                event.getId(),
                savedEvent.getCreatedBy(),
                Participant.Status.ACCEPTED
        );

        log.info("Saving event: {}", savedEvent);
        log.info("Saving participant after creating event: {}", savedParticipant);

        participantRepository.save(savedParticipant);
        return eventRepository.save(event);
    }

    public List<Event> getAcceptedEventsByParticipant(Long chatId) {
        return eventRepository.findAcceptedEventsByUser(chatId);
    }

    public Event findById(Long id) {
        return eventRepository.findById(id)
                .orElseThrow(() -> new EventNotFoundException("Event not found with id " + id));
    }

    public void deleteByDateTime(LocalDateTime startDateTime) {
        participantRepository.deleteByStartDateTime(startDateTime);
        eventRepository.deleteByStartDateTimeBefore(startDateTime);
    }
}
