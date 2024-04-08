# Modes

### Startup
- consider connection retry or timeout (?)
- Initialize scale with calibration factor retrieved via MQTT

### Idle
- HX711 power down
- ESP32 in deep sleep

### Active
- HX711 power up
- ESP32 active
- in either one of the following modes

### Calibration
- variables (configurable with MQTT)
    - known weight
- steps:
    1. Call set_scale() with no parameters
    2. The user is asked to place the known weight
    3. The user needs to confirm (MQTT message) that the weight was placed
    4. measuring 10 values and getting the average as a value (read_average() or get_units(10)?)
    5. Divide value from step 4 by the known weight
    6. Send this new calibration factor back through MQTT (retained)
    7. Call set_scale() with calibration factor

### Calibration factor fine-tuning
- when a + is sent via a specific topic of MQTT, increase the calibration factor by 10
- when a - is sent via a specific topic of MQTT, decrease the calibration factor by 10
- (10 could be replaced with a configurable fine-tuning parameter)
- send new calibration factor back via MQTT (retained)

### Tare
- When tare mode is activated, the tare() function is called once

### Weighting
- Continuosly call function get_units() and send the values via MQTT
- should loop fast as possible




