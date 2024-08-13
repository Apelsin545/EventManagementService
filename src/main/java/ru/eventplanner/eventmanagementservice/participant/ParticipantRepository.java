package ru.eventplanner.eventmanagementservice.participant;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Modifying;
import org.springframework.data.jpa.repository.Query;
import org.springframework.stereotype.Repository;
import org.springframework.transaction.annotation.Transactional;


import java.time.LocalDateTime;
import java.util.List;

@Repository
public interface ParticipantRepository extends JpaRepository<Participant, ParticipantPK> {
    List<Participant> findByEventId(Long eventId);
    List<Participant> findByUserId(Long userId);

    void deleteByEventId(Long eventId);

    @Transactional
    @Modifying
    @Query(value = "delete from participants p using events e where p.event_id = e.id and e.start_date_time < ?1",
            nativeQuery = true)
    void deleteByStartDateTime(LocalDateTime dateTime);

    @Transactional
    @Modifying
    @Query("update Participant p set p.status = ?3 where p.eventId = ?1 and p.userId = ?2")
    void updateStatus(Long eventId, Long userId, Participant.Status newStatus);
}
