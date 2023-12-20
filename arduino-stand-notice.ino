const int buttonPin = 4;
const int greenLedPin = 2;
const int redLedPin = 3;
int buttonState = 0;

void setup() {
  pinMode(greenLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(redLedPin, LOW);
    delay(1500000); // Wait for 25 minutes
    // delay(5000); // Demo time of 5 seconds
    digitalWrite(greenLedPin, LOW);
    digitalWrite(redLedPin, HIGH);
  }
}

