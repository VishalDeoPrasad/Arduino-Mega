int piezo = 10;
int tilt = 11;
int led = 5;
int buzzer = 4;
int piezo_val;
int tilt_val;
void setup() {
  pinMode(piezo, INPUT);
  pinMode(tilt, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  piezo_val = digitalRead(piezo);
  tilt_val = digitalRead(tilt);
  Serial.print("Piezo Value = ");
  Serial.print(piezo_val);
  Serial.print('\t');
  Serial.print("Tilt Value = ");
  Serial.print(tilt_val);
  Serial.print('\t');
  if (tilt_val == 1 and piezo_val == 0){
    Serial.println("Both Sensor Off");
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }
  else if (tilt_val == 0 and piezo_val == 1){
    Serial.println("Both Sensor ON"); 
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  }
  else if (tilt_val == 0 and piezo_val == 0){
    Serial.println("Tilt Sensor is ON");
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
  }
  else if (tilt_val == 1 and piezo_val == 1){
    Serial.println("Piezo Sensor is ON");
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
  }
  
  

}
