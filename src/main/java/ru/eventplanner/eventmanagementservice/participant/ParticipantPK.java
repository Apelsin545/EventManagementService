package ru.eventplanner.eventmanagementservice.participant;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

import java.io.Serializable;

@Data
@NoArgsConstructor
@AllArgsConstructor
public class ParticipantPK implements Serializable {
    private Long eventId;
    private Long userId;
}
