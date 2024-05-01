# Data Storage Possibilities

## ESP32

We have an [ESP WROOM32](resources/esp32-wroom-da_datasheet_en.pdf), so we can concentrate on that model.

It is possible to store data on the ESP32 directly (do not use this for now)
https://randomnerdtutorials.com/esp32-save-data-permanently-preferences/

--> and to communicate with the SPI flash integrated in the WROOM32 (use this!)
https://randomnerdtutorials.com/esp32-vs-code-platformio-spiffs/
----> and here an example:
https://github.com/espressif/arduino-esp32/blob/master/libraries/SPIFFS/examples/SPIFFS_time/SPIFFS_time.ino


## External
