package ru.eventplanner.eventmanagementservice.event;

import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@Slf4j
@RestController
@RequestMapping("/event")
public class EventController {
    private final EventService eventService;

    @Autowired
    public EventController(EventService eventService) {
        this.eventService = eventService;
    }

    @PostMapping
    public Event saveEvent(@RequestBody Event event) {
        log.info("Saving event: {}", event);
        return eventService.save(event);
    }

    @GetMapping("/accepted")
    public List<Event> getAcceptedEventsByParticipant(@RequestHeader("chatId") Long chatId) {
        return eventService.getAcceptedEventsByParticipant(chatId);
    }

    @GetMapping("/{eventId}")
    public ResponseEntity<Event> findEventById(@PathVariable Long eventId) {
        Event event = eventService.findById(eventId);
        return ResponseEntity.ok(event);
    }

    @DeleteMapping
    public void deleteByStartTime(@RequestBody LocalDateTimeWrapper wrapper) {
        eventService.deleteByDateTime(wrapper.dateTime());
    }
}
