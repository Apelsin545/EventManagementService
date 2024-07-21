package ru.eventplanner.eventmanagementservice.event;

import org.springframework.data.jpa.repository.JpaRepository;

import java.time.LocalDateTime;

public interface EventRepository extends JpaRepository<Event, Long> {
    void deleteByDateTime(LocalDateTime dateTime);
}
