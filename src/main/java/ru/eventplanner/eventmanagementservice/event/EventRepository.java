package ru.eventplanner.eventmanagementservice.event;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.time.LocalDateTime;

@Repository
public interface EventRepository extends JpaRepository<Event, Long> {
    void deleteByStartDateTime(LocalDateTime startDateTime);
}
