int buzzerPin = 7;
int buttonPin = 10;
void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {
  int state = digitalRead(buttonPin);
  if (state == 0){
    digitalWrite(buzzerPin, HIGH);
  }
  else{
    digitalWrite(buzzerPin, LOW);
  }
 
}
