int piezo_sensor = 6;
int led = 3;
int val;
void setup() {
  pinMode(piezo_sensor, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  val = digitalRead(piezo_sensor);
  Serial.print("Sensor Reading : ");
  Serial.println(val);
  if (val == 0){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }

}
