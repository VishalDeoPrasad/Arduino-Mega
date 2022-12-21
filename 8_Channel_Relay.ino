int relayIn1=9;
int relayIn2=2;
int relayIn3=3;
int relayIn4=4;
int relayIn5=5;
int relayIn6=6;
int relayIn7=7;
int relayIn8=8;
void setup() {
  pinMode(relayIn1, OUTPUT);
  pinMode(relayIn2, OUTPUT);
  pinMode(relayIn3, OUTPUT);
  pinMode(relayIn4, OUTPUT);
  pinMode(relayIn5, OUTPUT);
  pinMode(relayIn6, OUTPUT);
  pinMode(relayIn7, OUTPUT);
  pinMode(relayIn8, OUTPUT);

}

void loop() {
  digitalWrite(relayIn1, HIGH);
  delay(2000);
  digitalWrite(relayIn1, LOW);
  
  digitalWrite(relayIn2, HIGH);
  delay(2000);
  digitalWrite(relayIn2, LOW);
  
  digitalWrite(relayIn3, HIGH);
  delay(2000);
  digitalWrite(relayIn3, LOW);
  
  digitalWrite(relayIn4, HIGH);
  delay(2000);
  digitalWrite(relayIn4, LOW);

  digitalWrite(relayIn5, HIGH);
  delay(2000);
  digitalWrite(relayIn5, LOW);

  digitalWrite(relayIn6, HIGH);
  delay(2000);
  digitalWrite(relayIn6, LOW);

  digitalWrite(relayIn7, HIGH);
  delay(2000);
  digitalWrite(relayIn7, LOW);

  digitalWrite(relayIn8, HIGH);
  delay(2000);
  digitalWrite(relayIn8, LOW);
  

}
