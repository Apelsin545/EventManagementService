package ru.eventplanner.eventmanagementservice.participant;

import lombok.Data;
import lombok.NoArgsConstructor;

import java.io.Serializable;

@Data
@NoArgsConstructor
public class ParticipantPK implements Serializable {
    private Long eventId;
    private Long userId;
}
