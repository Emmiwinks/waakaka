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

### Hardware Wiring

- connect 4 lead cells with HX711:
  - https://www.instructables.com/Arduino-Bathroom-Scale-With-50-Kg-Load-Cells-and-H/
  - possible indications: we might need to build a Wheatstone bridge OR buy a connection helper: https://www.sparkfun.com/products/13878

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

## Findings to Discuss
- load cells will propably give only one value when connected, MQTT Topics shall be reduced to one  (e.g., `waakaka/load`) accordingly





















    s.com/esp32-mqtt-publish-subscribe-arduino-ide/
  - broker:
    - https://github.com/eclipse/mosquitto
    - oder einfach via apt package: https://www.elektronik-kompendium.de/sites/raspberry-pi/2709041.htm
