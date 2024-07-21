package ru.eventplanner.eventmanagementservice.participant;

import org.springframework.data.jpa.repository.JpaRepository;

public interface ParticipantRepository extends JpaRepository<Participant, ParticipantPK> {
}
