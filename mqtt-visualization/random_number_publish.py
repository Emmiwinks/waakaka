import paho.mqtt.client as mqtt
import random
from time import sleep

# MQTT broker settings
broker_address = "localhost"  # Use the IP address or hostname of your MQTT broker
broker_port = 1883
topic = "test/topic"

# Connect to the MQTT broker
client = mqtt.Client("PythonPublisher")
client.connect(broker_address, broker_port, 60)

# Publish a random float to the topic every 5 seconds
try:
    while True:
        random_value = random.uniform(0, 100)
        client.publish(topic, payload=str(random_value), qos=0, retain=False)
        print(f"Published {random_value} to topic {topic}")
        sleep(0.002)
except KeyboardInterrupt:
    print("Script stopped by the user")

# Cleanly disconnect from the broker
client.disconnect()
