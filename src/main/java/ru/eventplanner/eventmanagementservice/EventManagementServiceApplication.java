package ru.eventplanner.eventmanagementservice;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.Bean;
import ru.eventplanner.eventmanagementservice.event.Event;
import ru.eventplanner.eventmanagementservice.event.EventRepository;
import ru.eventplanner.eventmanagementservice.participant.Participant;
import ru.eventplanner.eventmanagementservice.participant.ParticipantRepository;

import java.time.LocalDateTime;

@SpringBootApplication
public class EventManagementServiceApplication {
    public static void main(String[] args) {
        SpringApplication.run(EventManagementServiceApplication.class, args);
    }
}
