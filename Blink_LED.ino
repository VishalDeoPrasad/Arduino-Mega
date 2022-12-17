void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); // LED On
  delay(500);             // delay (1000 = 1s)
  digitalWrite(13, LOW);  // LED Off
  delay(500);             // delay

}
