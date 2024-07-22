package ru.eventplanner.eventmanagementservice.event;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

import java.time.LocalDateTime;
import java.util.Optional;

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
        return eventService.save(event);
    }

    @GetMapping("/{eventId}")
    public Event findEventById(@PathVariable Long eventId) {
        return eventService.findById(eventId).orElseThrow();
    }

    @DeleteMapping
    public void deleteByStartTime(@RequestBody LocalDateTimeWrapper wrapper) {
        eventService.deleteByDateTime(wrapper.dateTime());
    }
}
