## To-Dos

- read description and understand: https://tutorials-raspberrypi.de/esp8266-waage-gewichtssensor-hx711-bauen/
  - also, possibly download the libraries and get a first impression

- Daten vom ESP32 auf dem Raspi übertragen --> welche Möglichkeiten?

## Libraries
- Libraries:
  - https://github.com/bogde/HX711?tab=readme-ov-file
  - https://github.com/agnunez/ESP8266-I2C-LCD1602

## Notes
- need Arduino IDE for ESP32? https://github.com/espressif/arduino-esp32
- or rather development framework? https://github.com/espressif/esp-idf
--> see page https://www.espressif.com/en/products/socs/esp32

## Connection of ESP32 to something (e.g. Raspberry Pi)

- MQTT: https://predictabledesigns.com/how-to-connect-esp32-microcontroller-to-raspberry-pi-using-iot-mqtt/
- USB: https://linuxhint.com/connect-esp32-board-raspberry-pi-arduino-ide/
- pretty nice and thorough explanation: https://randomnerdtutorials.com/getting-started-with-esp32/

## Steps

- hardware proof-of-concept (our available hardware works together as
expected)
  - create setup such that POC can be done
  - do POC

- fundamental weighting process with Wägestücke

- get fancy!

## Notes

- mqtt: sett "allow_anonymous true", everything else should just work as long
as no password/acl files etc. are involved

## Q & A

- difference char and std::byte?

## Hardware Debugging

#### General
- https://www.linkedin.com/pulse/8-powerful-debugging-techniques-embedded-systems/
- https://docs.espressif.com/projects/esp-idf/en/stable/esp32/api-guides/jtag-debugging/index.html
- on-chip debugging: https://openocd.org/

#### Checking Input/Output Signals

--> ESP32 connected to HX711 (good explanation of what to expect):
https://en.kohacraft.com/archives/modify-the-circuit-of-the-hx711-module-to-operate-at-3-3v-and-measure-the-weight-with-esp32.html

- explanation of E+/E- and S+/S-:
https://forum.arduino.cc/t/4-wire-load-cell-wiring-hx711/1045547



#### Check Connections

#### ChatGPT Answers

1. Check Physical Connections

    Inspect Wiring: Ensure all physical connections between the ESP32 and the ADC are secure. This includes checking for cold solder joints, loose wires, and proper pin connections.
    Verify Power Supply: Both the ESP32 and the ADC should have the correct supply voltages. Use a multimeter to check the voltage at the power pins of the ADC.

2. Validate Power-Up & Basic Functionality

    Basic Blink Test: Ensure your ESP32 is functioning by running a simple blink sketch. This confirms that your ESP32 is programmable and operational.
    Check ADC Standalone: If possible, use a simple test configuration or a known good microcontroller setup to verify the ADC is working correctly.

3. Software Setup

    Correct Libraries: Ensure you are using the correct libraries for your ADC. Libraries specific to the communication protocol (SPI, I2C) and sometimes to the ADC model are required.
    Initialization Code: Check your initialization code for the communication bus (SPI or I2C) and the ADC itself. Ensure the correct pins, speed, and settings (e.g., bit resolution for the ADC) are configured.

4. Test Communication

    Simple Read Test: Write a simple sketch that attempts to read a value from the ADC. This could be a single conversion or a continuous read, depending on your application.
    Serial Debugging: Use Serial.print statements to debug the communication. Print out the values read from the ADC to the serial monitor. If you're getting sensible values, communication is likely fine.
    Error Handling: Check for any error codes or flags that might be returned by library functions used for communication. This can provide hints on what might be going wrong.

5. Advanced Debugging Tools

    Logic Analyzer / Oscilloscope: If you're still having issues, a logic analyzer or oscilloscope can be invaluable. These tools allow you to visually inspect the communication between the ESP32 and ADC. You can see if there are any signals being sent/received and verify their correctness.

6. Consult Documentation

    Component Datasheets: Revisit the datasheets or technical documentation for both the ESP32 and the ADC. They often contain crucial information on how to properly communicate with the device.
    Example Code: Look for example projects or code snippets that demonstrate communication between an ESP32 and your specific ADC or similar devices. These can provide configuration hints or troubleshooting steps.

Final Thoughts

If after following these steps you still encounter issues, consider reaching out to community forums or technical support for the components. Sometimes, specific quirks or issues may be known to the community or the manufacturers that are not immediately obvious from standard troubleshooting steps.

#### Reasonable steps

1. Connect GND and VCC between ESP32 and HX711, and measure voltage
  a. between VCC and GND of HX711
  b. between E+/E- and A+/A-, respectively (yep, that should to it, note from S)

2. run program and see what happens, possibly play a little with the
signal (A+/A-)

3. connect load cells
--> best would be to have one single load cell which suits exactly (i.e.
10 kg one) for checking

4. try again measuring and see what happens


