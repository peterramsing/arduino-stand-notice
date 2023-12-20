// const int buttonPin = 4;
// const int greenLedPin = 2;
// const int redLedPin = 3;
// int buttonState = 0;

// void setup() {
//   pinMode(greenLedPin, OUTPUT);
//   pinMode(redLedPin, OUTPUT);
//   pinMode(buttonPin, INPUT);
// }

// void loop() {
//   buttonState = digitalRead(buttonPin);
//   if (buttonState == HIGH) {
//     digitalWrite(greenLedPin, HIGH);
//     digitalWrite(redLedPin, LOW);
//     delay(1500000); // Wait for 25 minutes
//     digitalWrite(greenLedPin, LOW);
//     digitalWrite(redLedPin, HIGH);
//   }
// }

const int greenLedPin = 2;
const int buttonPin = 4;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(greenLedPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    // Button is pressed
    digitalWrite(greenLedPin, HIGH);
  } else {
    // Button is not pressed
    digitalWrite(greenLedPin, LOW);
  }
}
