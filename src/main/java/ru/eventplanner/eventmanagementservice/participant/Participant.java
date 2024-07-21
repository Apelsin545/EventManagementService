package ru.eventplanner.eventmanagementservice.participant;

import jakarta.persistence.*;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@AllArgsConstructor
@Entity
@NoArgsConstructor(force = true)
@IdClass(ParticipantPK.class)
@Table(name = "participants")
public class Participant {

    @Id
    private final Long eventId;

    @Id
    private final Long userId;

    private String status;
}

