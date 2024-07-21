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

    public Participant save(Participant participant) {
        return participantRepository.save(participant);
    }

    public List<Participant> findByUserId(Long userId) {
        return participantRepository.findByUserId(userId);
    }
}
