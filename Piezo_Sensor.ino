int piezo_sensor = 7;
int val;
void setup() {
  pinMode(piezo_sensor, INPUT);
  Serial.begin(9600);

}

void loop() {
  val = digitalRead(piezo_sensor);
  Serial.print("Sensor Reading : ");
  Serial.println(val);

}
