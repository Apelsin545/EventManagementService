package ru.eventplanner.eventmanagementservice.event;

import jakarta.persistence.*;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

import java.time.LocalDateTime;

@Data
@AllArgsConstructor
@Entity
@NoArgsConstructor(force = true)
@Table(name = "events")
public class Event {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private final Long id;

    private final String name;
    private String description;
    private String location;
    private final Long createdBy;
    private final LocalDateTime startDateTime;
    private final LocalDateTime endDateTime;
}
