# Time-Shifting Load Shedding Controller

Arduino demonstration of scheduled switching among four electrical load indicators, with a 20×4 I²C LCD displaying their status.

## What this repository demonstrates

Four digital outputs on pins 7, 6, 5, and 4; LCD at address 0x27; timed switching patterns.

## Source code

Main example: `load shedding controller (time shifting).ino`.

## How to explore

Clone or download the repository, open the source file, and review its dependencies and hardware or dataset assumptions. Arduino sketches require the appropriate Arduino IDE board and libraries; Python scripts require the imports and referenced datasets; web exercises can be opened or adapted locally.

## Scope and limitations

The implementation uses fixed delays and a predefined switching schedule rather than real-time demand forecasting. LEDs represent loads; real mains switching would require appropriate isolated hardware and safety design.

## Development notes

This repository is maintained as a learning or engineering prototype. Documented behavior is based on source-code inspection; this documentation does not claim independent hardware testing or performance validation.

## Security

Do not add personal data, private datasets, credentials, or API keys to public commits.
