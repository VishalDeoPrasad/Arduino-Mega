int switchPin = 5;
int buzzerPin = 4;
int state;
void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  state = digitalRead(switchPin);
  Serial.print("Sensor Current Value : ");
  Serial.print(state);
  if (state == 0){
    digitalWrite(buzzerPin, HIGH);
    Serial.println("LED ON");
  }
  else{
    digitalWrite(buzzerPin, LOW);
    Serial.println("LED OFF");
  }
}
