const int decimalInputPin = A0;
const int buttonPin = 6;
const int leds[] = {2, 3, 4, 5};
int binaryOutput[4];
int buttonState = 0;
int lastButtonState = 0;
int decimalValue = 0;

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW && lastButtonState == HIGH) {
    decimalValue++;
    if (decimalValue > 15) {
      decimalValue = 0;
    }
  }

  lastButtonState = buttonState;

  decimalToBinary(decimalValue);
  displayBinary();
  delay(100);
}

void decimalToBinary(int decimalValue) {
  for (int i = 3; i >= 0; i--) {
    binaryOutput[i] = decimalValue % 2;
    decimalValue /= 2;
  }
}

void displayBinary() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(leds[i], binaryOutput[i]);
  }
}
