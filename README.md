## SAM D21 Minimal board

In this repo you can find minimal schematic required to work with [SAM D21G18A](https://www.microchip.com/wwwproducts/en/ATSAMD21G18) MCU.
SAM D21 is quite popular platform - it's used in Arduino Zero and in many other appliances.

This board is compatible with [Arduino](https://www.arduino.cc/) framework - in `led_example` directory you can find code required to light a LED on board and play with UART interface.

As a development platform [PlatformIO](https://platformio.org/) was choosed.


## MCU Ports vs Arduino pins

MCU Model: ATSAMD21G18A

| MCU Port | Arduino Zero pin number | Additional function |
| --- | --- | --- |
| PA02 | A0 | |
| PA03 | 42 | AREF |
| PA04 | A3 | |
| PA05 | A4 | |
| PA06 | 8 / D8 | |
| PA07 | 9 / D9 | |
| PA08 | 4 / D4 | |
| PA09 | 3 / D3 | |
| PA10 | 1 / D1 | Might be used as `Serial1`/TX (like Arduino Zero) |
| PA11 | 0 / D0 | Might be used as `Serial1`/RX (like Arduino Zero) |
| PA12 | 22 | SPI MISO  |
| PA13 | 38 | SPI SS/CSN (Arduino Zero: connected to EDBG) |
| PA14 | 2 / D2 | |
| PA15 | 5 / D5 | |
| PA16 | 11 / D11 | |
| PA17 | 13 / D13 | |
| PA18 | 10 / D10 | |
| PA19 | 12 / D12 | |
| PA20 | 6 / D6 | |
| PA21 | 7 / D7 | |
| PA22 | 20 | SDA |
| PA23 | 21 | SCL |
| PA24 | 28 | USB Negative (Arduino Zero: connected to native USB port) |
| PA25 | 29 | USB Positive (Arduino Zero: connected to native USB port) |
| PA27 | 26 | TX LED (might be controlled by user) |
| PA28 | 27 | USB Host EN (Arduino Zero: connected to native USB port) |
| PA30 | SWDCLK | Required for flashing without bootloader. (Arduino Zero: connected to EDBG) |
| PA31 | SWDIO | Required for flashing without bootloader. (Arduino Zero: connected to EDBG) |
| PB02 | A5 | |
| PB03 | 25 / D25 | RX LED (might be controlled by user) |
| PB08 | A1 | |
| PB09 | A2 | |
| PB10 | 23 | SPI MOSI |
| PB11 | 24 | SPI SCK |
| PB22 | 30 | `Serial`/TX (Arduino Zero: port connected through EDBG / USB programming port) |
| PB23 | 31 | `Serial`/RX (Arduino Zero: port connected through EDBG / USB programming port) |


Have fun :)

## Schematic
![SAM D21 minimal board](./samd21g_minimal_board.png?raw=true "SAM D21 minimal")
