package org.example;

import com.rabbitmq.client.*;

import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.util.EventListener;
import java.util.concurrent.TimeoutException;

public class RabbitMQManager {
    private final static String DEFAULT_QUEUE_NAME = "OutputMessages";

    private ConnectionFactory factory;
    private Connection connection;
    private Channel channel;

    public void Initialize() {
        factory = new ConnectionFactory();
        factory.setHost("localhost");
        try {
            connection = factory.newConnection();
            channel = connection.createChannel();
            channel.queueDeclare(DEFAULT_QUEUE_NAME, false, false, false, null);
        } catch (IOException | TimeoutException e) {
            throw new RuntimeException(e);
        }
    }

    public void Initialize(DeliverCallback deliverCallback) {
        Initialize();
        try {
            channel.basicConsume(DEFAULT_QUEUE_NAME, false, deliverCallback, consumerTag -> { });
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }

    public void SendMessage(String message) throws IOException {
        channel.basicPublish("", DEFAULT_QUEUE_NAME, null, message.getBytes(StandardCharsets.UTF_8));
    }

    public Channel getChannel() {
        return channel;
    }
}
