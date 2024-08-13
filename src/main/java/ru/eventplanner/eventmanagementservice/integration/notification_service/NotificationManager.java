package ru.eventplanner.eventmanagementservice.integration.notification_service;

import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.web.client.RestTemplate;


@Slf4j
@Service
public class NotificationManager {
    private final static String url = "http://localhost:8083/notification";
    private final RestTemplate restTemplate;

    @Autowired
    public NotificationManager(RestTemplate restTemplate) {
        this.restTemplate = restTemplate;
    }

    public Notification postNotification(Notification notification) {
        log.info("Posting notification: {}", notification);

        return restTemplate.postForObject(url, notification, Notification.class);
    }

}
