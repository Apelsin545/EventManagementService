package ru.eventplanner.eventmanagementservice.event;

import com.fasterxml.jackson.annotation.JsonProperty;
import jakarta.persistence.*;
import lombok.Data;
import lombok.NoArgsConstructor;

import java.time.LocalDateTime;

@Data
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

    @JsonProperty("created_by")
    private final Long createdBy;

    @JsonProperty("start_date_time")
    private final LocalDateTime startDateTime;

    @JsonProperty("end_date_time")
    private final LocalDateTime endDateTime;
}
