package ru.eventplanner.eventmanagementservice.event;

import com.fasterxml.jackson.annotation.JsonProperty;
import lombok.Data;

import java.time.LocalDateTime;

public record LocalDateTimeWrapper(@JsonProperty("date_time") LocalDateTime dateTime) {
}
