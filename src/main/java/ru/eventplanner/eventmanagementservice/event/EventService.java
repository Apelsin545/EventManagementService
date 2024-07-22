package ru.eventplanner.eventmanagementservice.event;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import ru.eventplanner.eventmanagementservice.participant.ParticipantRepository;

import java.time.LocalDateTime;
import java.util.Optional;

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
        return eventRepository.save(event);
    }

    public Optional<Event> findById(Long id) {
        return eventRepository.findById(id);
    }

    public void deleteByDateTime(LocalDateTime startDateTime) {
        participantRepository.deleteByStartDateTime(startDateTime);
        eventRepository.deleteByStartDateTimeBefore(startDateTime);
    }
}
