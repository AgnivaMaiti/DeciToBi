# Decimal to Binary Converter (Arduino)

This project is an Arduino-based decimal to binary converter that uses a push-button to increment a decimal number (0–15) and displays its 4-bit binary equivalent using four LEDs.

## 📦 Components Used

- Arduino Uno (or compatible board)
- 4x LEDs
- 4x Resistors (220Ω)
- Push-button
- Breadboard & Jumper wires

## ⚙️ How It Works

- Press the button to increment the decimal number.
- The number cycles from 0 to 15 and then resets.
- The 4-bit binary representation of the current number is displayed using the LEDs.

## 🧠 Logic

1. On every **rising edge** (button press), the decimal value is incremented.
2. A function `decimalToBinary()` converts the value to binary.
3. The binary output is displayed using `digitalWrite()` on four LEDs.

## 🧾 Code Overview

- `buttonPin`: Connected to the push-button input (with `INPUT_PULLUP`).
- `leds[]`: An array holding LED pin numbers.
- `decimalToBinary()`: Converts a decimal number to binary.
- `displayBinary()`: Lights up LEDs based on binary output.

## 🖼️ Circuit Diagram

_(Add a circuit diagram image here if available)_

## 🔌 Pin Configuration

| Component | Pin        |
|-----------|------------|
| LED 1     | Pin 2      |
| LED 2     | Pin 3      |
| LED 3     | Pin 4      |
| LED 4     | Pin 5      |
| Button    | Pin 6      |
| Analog In | A0 (unused)|

## 🛠️ Setup

1. Connect the LEDs to pins 2–5 with resistors.
2. Connect the push-button to pin 6 and GND.
3. Upload the code via Arduino IDE.

## 🧑‍💻 Made By

**Agniva Maiti**
