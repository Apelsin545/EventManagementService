package ru.eventplanner.eventmanagementservice.participant;

import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@Slf4j
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

    @GetMapping
    public ResponseEntity<Participant> getParticipantByPK(
            @RequestParam("eventId") Long eventId,
            @RequestParam("userId") Long userId
    ) {
        log.info("Searching participant with event id - {} and user id - {}", eventId, userId);

        Participant participant = participantService.getById(new ParticipantPK(eventId, userId));
        return ResponseEntity.ok(participant);
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
    public void updateParticipantStatus(@RequestBody Participant participant) {
        participantService.updateStatus(participant);
    }

    @DeleteMapping
    public void removeParticipant(Participant participant) {
        participantService.delete(participant);
    }
}
