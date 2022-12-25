int ledPin = 6;
int switchPin = 5;
int state;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  state = digitalRead(switchPin);
  Serial.print("Sensor Current Value : ");
  if (state == 0){
    digitalWrite(ledPin, HIGH);
    Serial.println("LED ON");
  }
  else{
    digitalWrite(ledPin, LOW);
    Serial.println("LED OFF");
  }
}
