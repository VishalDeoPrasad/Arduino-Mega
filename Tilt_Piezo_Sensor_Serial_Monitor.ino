int piezo = 10;
int tilt = 11;
int piezo_val;
int tilt_val;
void setup() {
  pinMode(piezo, INPUT);
  pinMode(tilt, INPUT);
  Serial.begin(9600);

}

void loop() {
  piezo_val = digitalRead(piezo);
  tilt_val = digitalRead(tilt);
  Serial.print("Piezo Value = ");
  Serial.print(piezo_val);
  Serial.print('\t');
  Serial.print("Tilt Value = ");
  Serial.println(tilt_val);
  
  

}
