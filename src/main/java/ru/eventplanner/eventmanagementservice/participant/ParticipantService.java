package ru.eventplanner.eventmanagementservice.participant;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class ParticipantService {

    private final ParticipantRepository participantRepository;

    @Autowired
    public ParticipantService(ParticipantRepository participantRepository) {
        this.participantRepository = participantRepository;
    }

    public Participant getById(ParticipantPK participantPK) {
        return participantRepository.findById(participantPK)
                .orElseThrow(() -> new ParticipantNotFoundException("Participant not found with pk: " + participantPK));
    }

    public Participant save(Participant participant) {
        return participantRepository.save(participant);
    }

    public List<Participant> findByUserId(Long userId) {
        return participantRepository.findByUserId(userId);
    }

    public List<Participant> findByEventId(Long eventId) {
        return participantRepository.findByEventId(eventId);
    }

    public void updateStatus(Long eventId, Long userId, Participant.Status newStatus) {
        participantRepository.updateStatus(eventId, userId, newStatus);
    }

    public void delete(Participant participant) {
        participantRepository.delete(participant);
    }

    public void deleteByEventId(Long eventId) {
        participantRepository.deleteByEventId(eventId);
    }
}
