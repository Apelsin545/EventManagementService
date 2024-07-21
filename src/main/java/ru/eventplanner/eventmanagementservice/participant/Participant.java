package ru.eventplanner.eventmanagementservice.participant;

import jakarta.persistence.*;
import lombok.Data;
import lombok.NoArgsConstructor;

import java.time.LocalDateTime;

@Data
@Entity
@IdClass(ParticipantPK.class)
public class Participant {

    @Id
    private Long eventId;

    @Id
    private String userId;

    private String status;
}

