package ru.eventplanner.eventmanagementservice.participant;

import org.springframework.data.jpa.repository.JpaRepository;

import java.util.List;

public interface ParticipantRepository extends JpaRepository<Participant, ParticipantPK> {
    List<Participant> findByUserId(Long userId);
}
