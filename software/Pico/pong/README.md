# Pong (RP2040 / Raspberry Pi Pico)

This folder contains `pong.c`, an RP2040 C project intended for Raspberry Pi Pico with an SPI display (e.g., ST7735).

## Files
- `pong.c` — source file
- (optional) `CMakeLists.txt` — minimal project file to build with Pico SDK

## Build notes
- This project targets the Raspberry Pi Pico C SDK (CMake). If you want to build: install the Pico SDK and follow Raspberry Pi's SDK documentation.
- If you prefer not to build locally, include screenshots or a short GIF in `docs/` to show the demo.

## Wiring (typical ST7735 to Pico)
- ST7735 SCLK -> Pico SPI0 SCLK (GPIO18)
- ST7735 MOSI -> Pico SPI0 TX (GPIO19)
- ST7735 CS   -> any free GPIO (e.g., GPIO17)
- ST7735 DC   -> any free GPIO (e.g., GPIO16)
- ST7735 RST  -> any free GPIO (e.g., GPIO20) or tie to RESET
- Display VCC -> 3.3V (do NOT use 5V)
- Display GND -> GND

Adjust pins in code to match your wiring.
