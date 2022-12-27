int piezo_sensor = 7;
int ledPin = 8;
int buzzer = 3;
int val;
void setup() {
  pinMode(piezo_sensor, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  val = digitalRead(piezo_sensor);
  Serial.print("Sensor Reading : ");
  Serial.println(val);
  if (val == 0){
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin, LOW);
  }

}
