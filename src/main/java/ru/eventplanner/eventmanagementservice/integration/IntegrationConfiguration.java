package ru.eventplanner.eventmanagementservice.integration;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.web.client.RestTemplateBuilder;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.web.client.RestTemplate;

@Configuration
public class IntegrationConfiguration {
    private final RestTemplateBuilder restTemplateBuilder;

    @Autowired
    public IntegrationConfiguration(RestTemplateBuilder restTemplateBuilder) {
        this.restTemplateBuilder = restTemplateBuilder;
    }

    @Bean
    public RestTemplate restTemplate() {
        return restTemplateBuilder.build();
    }

}
