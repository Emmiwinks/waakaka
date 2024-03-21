# Roadmap

## Road to next town

- Do a successful and precise weight measurement
    - different weights over orders of magnitude

## Next Steps

### Homework 04.04.2024

- figure out how to control the pin voltages of the GPIO pins
    - see, e.g.: https://www.upesy.com/blogs/tutorials/how-to-use-gpio-pins-of-esp32-with-arduino
- figure out what to expect when connecting the load cell to the HX711 and put
weight onto it (which values should change, how can we measure it?)


### Homework for 21.03.2024

- Kabelenden desisolieren
- rote SparkFun - Boards mitbringen
- (maybe) 1x 10kg - Wägestück mit grünem Kabel
- (maybe) MQTT calibration factor adjustment
    - plus / minus settings (or stop calibrating)

### Homework for 10.03.2024

- find out how to do hardware debugging
    - are connections intact
    - do the inputs/outputs work correctly

## Already accomplished

### 10.03.2024

- verified that HX711 is working properly
    - voltage between E+/E- is approx. 2.7V
- soldered connections between ESP32 and HX711
- learned that Serial connection needs some delay (approx. 2000ms)
to wake up
- successfully measured 0kg and verified that measurement reacts
to cable shaking
- got to know some nice retrowave tunes

### 03.03.2024

- weighting software runs on ESP32
- hardware setup is possible to assemble
    - connect HX711 to ESP32
    - connect load cells to each other and to HX711

### 25.02.2024

- make MQTT work on the ESP32 with an external broker via WLAN
    - library works as expected
    - topics defined
    - both publish and subscribe work
- connect ESP32 to computer and flash software
