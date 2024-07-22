package ru.eventplanner.eventmanagementservice.participant;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@RequestMapping("/participant")
public class ParticipantController {

    private final ParticipantService participantService;

    @Autowired
    public ParticipantController(ParticipantService participantService, ParticipantRepository participantRepository) {
        this.participantService = participantService;
    }

    @PostMapping
    public Participant saveParticipant(@RequestBody Participant participant) {
        if (participant.getStatus() == null)
            participant.setStatus(Participant.Status.PENDING);
        return participantService.save(participant);
    }

    @GetMapping("/event/{eventId}")
    public List<Participant> getParticipantsByEventId(@PathVariable Long eventId) {
        return participantService.findByEventId(eventId);
    }

    @GetMapping("/user/{userId}")
    public List<Participant> getParticipantsByUserId(@PathVariable Long userId) {
        return participantService.findByUserId(userId);
    }

    @PutMapping
    public void updateParticipantStatus(
            @RequestParam("eventId") Long eventId,
            @RequestParam("userId") Long userId,
            @RequestParam("status") Participant.Status newStatus
            ) {
        participantService.updateStatus(eventId, userId, newStatus);
    }

    @DeleteMapping
    public void removeParticipant(Participant participant) {
        participantService.delete(participant);
    }
}
