package ru.eventplanner.eventmanagementservice.participant;

import com.fasterxml.jackson.annotation.JsonProperty;
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
    @JsonProperty("event_id")
    private final Long eventId;

    @Id
    @JsonProperty("user_id")
    private final Long userId;

    @Enumerated(EnumType.STRING)
    private Status status;

    public enum Status {
        PENDING, ACCEPTED, REJECTED
    }
}

