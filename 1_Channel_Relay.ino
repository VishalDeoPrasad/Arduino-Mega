int relayPin = 12;
void setup() {
  pinMode(relayPin, OUTPUT);

}

void loop() {
  digitalWrite(relayPin, HIGH);
  delay(3000);
  digitalWrite(relayPin, LOW);
  delay(3000);

}
