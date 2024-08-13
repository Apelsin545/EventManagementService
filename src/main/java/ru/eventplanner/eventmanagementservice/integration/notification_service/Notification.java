package ru.eventplanner.eventmanagementservice.integration.notification_service;

import com.fasterxml.jackson.annotation.JsonProperty;
import jakarta.persistence.*;
import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Data;
import lombok.NoArgsConstructor;

import java.time.LocalDateTime;

@Builder
@Data
@AllArgsConstructor
@NoArgsConstructor(force = true)
public class Notification {
    private final Long id;

    @JsonProperty("user_id")
    private final Long userId;

    @JsonProperty("event_id")
    private final Long eventId;

    private String message;

    @JsonProperty("send_at")
    private LocalDateTime sendAt;
}
