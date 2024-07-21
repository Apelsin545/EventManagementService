package ru.eventplanner.eventmanagementservice.participant;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Modifying;
import org.springframework.data.jpa.repository.Query;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public interface ParticipantRepository extends JpaRepository<Participant, ParticipantPK> {
    List<Participant> findByEventId(Long eventId);
    List<Participant> findByUserId(Long userId);

    @Modifying
    @Query("update Participant p set p.status = ?3 where p.eventId = ?1 and p.userId = ?2")
    void updateStatus(Long eventId, Long userId, String newStatus);
}
