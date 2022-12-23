int tilt_sensor = 6;
void setup() {
  pinMode(tilt_sensor, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  int state = digitalRead(tilt_sensor);
  Serial.print("Sensor State : ");
  Serial.println(state);
  delay(500);
  

}
