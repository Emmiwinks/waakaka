# Modes

## Startup
- connection retry and timeout
- initialization with calibration factor(s)
    - possibility to store values on ESP, like calibration factor?
    - otherwise, send value via MQTT (would require internet all the time)

## Idle
- HX711 power down
- ESP32 in deep sleep

## Active
- HX711 power up
- ESP32 active

--> in either one of the following modes:

### Calibration
- variables (configurable with MQTT)
    - known weight(s)
- steps:
    1. Call set_scale() with no parameters
    2. The user is asked to place the known weight
    3. The user needs to confirm (MQTT message) that the weight was placed
    4. measuring 10 values and getting the average as a value (read_average() or get_units(10)?)
    5. Divide value from step 4 by the known weight
    6. Send this new calibration factor back through MQTT (retained)
    7. Call set_scale() with calibration factor

(In general, we should have a piecewise linear function or so, so possibly measure
multiple weights instead of only one to get a calibration over multiple orders
of magnitude.) --> later, for now one-point measurement

### Calibration factor fine-tuning
- when a + is sent via a specific topic of MQTT, increase the calibration factor by 10
- when a - is sent via a specific topic of MQTT, decrease the calibration factor by 10
- (10 could be replaced with a configurable fine-tuning parameter)
- send new calibration factor back via MQTT (retained)

--> Should this really be a separate mode? Or can this always be done during weighting?

### Tare
- When tare mode is activated, the tare() function is called once
- then returns to weighting mode

### Weighting: Default mode
- Continuosly call function get_units() and send the values via MQTT
- should loop as fast as possible
- should be default mode if no other mode is set via MQTT

# MQTT Topics

- waakaka
    - modes
        - val
        - set
    - kalibration
        - no_nodes
        - val --> array
        - set --> array
        - fine_tuning
            - val
            - set (+, -, magnitude (number))
        - current_kalibration_weight
            - val
            - set
    - loadcells
        - cell_1
    - confirm

The confirmation topic is used for any kind of confirmation. It only sends "1".

## Further information

"Modes" has the following values:
- 0: idle
- 1: weighting (default mode)
- 2: tare
- 3: calibration

When 2 or 3 are called and are finished, the system would go back to 1 automatically.
It will remain in 1, unless the user sets a different mode, or a non-interaction timeout
is reached, upon which the system goes into 0 and remains there until further
human interaction.

The calibration factor fine-tuning need not necessarily be a separate mode, because the
calibration factor can simply be tuned during weighting. Check the efficiency of the
conditional checks here!
