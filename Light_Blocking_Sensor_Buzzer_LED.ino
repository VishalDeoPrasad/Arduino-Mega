int lb_sensor = 48;
int ledPin = 2;
int buzzer = 22;
int val;
void setup() {
  pinMode(lb_sensor, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  val = digitalRead(lb_sensor);
  Serial.print("Sensor Reading : ");
  Serial.println(val);
  if (val == 0){
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin, LOW);
  }

}
