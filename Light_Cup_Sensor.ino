int switchPin = 42;
int ledPin = 40;
int state;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  state = digitalRead(switchPin);
  Serial.print("Sensor Current Value : ");
  Serial.print(state);
  if (state == 1){
    digitalWrite(ledPin, HIGH);
    Serial.println("\tled ON");
  }
  else{
    digitalWrite(ledPin, LOW);
    Serial.println("\tled OFF");
  }
}
