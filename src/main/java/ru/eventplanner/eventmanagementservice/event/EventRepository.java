package ru.eventplanner.eventmanagementservice.event;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;
import org.springframework.transaction.annotation.Transactional;

import java.time.LocalDateTime;

@Repository
public interface EventRepository extends JpaRepository<Event, Long> {
    @Transactional
    void deleteByStartDateTimeBefore(LocalDateTime startDateTime);
}
