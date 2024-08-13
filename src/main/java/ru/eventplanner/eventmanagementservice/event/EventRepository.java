package ru.eventplanner.eventmanagementservice.event;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;
import org.springframework.stereotype.Repository;
import org.springframework.transaction.annotation.Transactional;

import java.time.LocalDateTime;
import java.util.List;

@Repository
public interface EventRepository extends JpaRepository<Event, Long> {

    @Transactional
    void deleteByStartDateTimeBefore(LocalDateTime startDateTime);

    @Query(value = "SELECT e.* FROM events e " +
            "JOIN participants p ON e.id = p.event_id " +
            "WHERE p.user_id = :chatId " +
            "AND p.status = 'ACCEPTED' ", nativeQuery = true)
    List<Event> findAcceptedEventsByUser(@Param("chatId") Long chatId);
}
