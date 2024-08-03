CREATE TABLE IF NOT EXISTS events
(
    id              BIGINT GENERATED BY DEFAULT AS IDENTITY PRIMARY KEY,
    name            VARCHAR(64) NOT NULL,
    description     VARCHAR(128),
    location        VARCHAR(128),
    created_by      BIGINT      NOT NULL,
    start_date_time TIMESTAMP   NOT NULL,
    end_date_time   TIMESTAMP
);

CREATE TABLE IF NOT EXISTS participants
(
    event_id   BIGINT NOT NULL REFERENCES events (id),
    user_id    BIGINT NOT NULL,
    status     VARCHAR(64) DEFAULT 'pending',
    primary key(event_id, user_id)
);
