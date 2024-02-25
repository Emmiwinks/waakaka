# waakaka

## Available Hardware

- ESP WRoom32

## Useful Links

#### Basic

- how to build a scale: https://tutorials-raspberrypi.de/esp8266-waage-gewichtssensor-hx711-bauen/
- Arduino IDE:
  - IDE: https://www.arduino.cc/en/software
  - ESP32: https://docs.espressif.com/projects/arduino-esp32/en/latest/index.html

- How to power ESP32: https://esp32io.com/tutorials/how-to-power-esp32

#### Networking & Communication

- connect to WiFi:
  - https://github.com/espressif/arduino-esp32/blob/master/libraries/WiFi/examples/WiFiClientConnect/WiFiClientConnect.ino
  - https://www.upesy.com/blogs/tutorials/how-to-connect-wifi-acces-point-with-esp32#

- MQTT:
  - possible pubsub client: https://github.com/knolleary/pubsubclient/tree/master
    - how to implement: https://randomnerdtutorial

## MQTT Topics

- waakaka
  - kalibration
    - val
    - set
  - loadcells
    - horst
    - gabi
    - maik
    - eowyn

## To - Do

- finding out
  - how to connect AD converter to ESP32
  - how to connect the load cells to the AD converter
  - Is one ESP32 sufficient?























    s.com/esp32-mqtt-publish-subscribe-arduino-ide/
  - broker:
    - https://github.com/eclipse/mosquitto
    - oder einfach via apt package: https://www.elektronik-kompendium.de/sites/raspberry-pi/2709041.htm
