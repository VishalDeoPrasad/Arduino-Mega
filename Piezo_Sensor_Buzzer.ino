int piezo_sensor = 6;
int buzzer = 8;
int val;
void setup() {
  pinMode(piezo_sensor, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  val = digitalRead(piezo_sensor);
  Serial.print("Sensor Reading : ");
  Serial.println(val);
  if (val == 0){
    digitalWrite(buzzer, HIGH);
  }
  else{
    digitalWrite(buzzer, LOW);
  }

}
