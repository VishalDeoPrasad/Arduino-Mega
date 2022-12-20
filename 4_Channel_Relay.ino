int relayIn1=9;
int relayIn2=10;
int relayIn3=11;
int relayIn4=12;
void setup() {
  pinMode(relayIn1, OUTPUT);
  pinMode(relayIn2, OUTPUT);
  pinMode(relayIn3, OUTPUT);
  pinMode(relayIn4, OUTPUT);

}

void loop() {
  digitalWrite(relayIn1, HIGH);
  delay(2000);
  digitalWrite(relayIn1, LOW);
  delay(2000);
  digitalWrite(relayIn2, HIGH);
  delay(2000);
  digitalWrite(relayIn2, LOW);
  delay(2000);
  digitalWrite(relayIn3, HIGH);
  delay(2000);
  digitalWrite(relayIn3, LOW);
  delay(2000);
  digitalWrite(relayIn4, HIGH);
  delay(2000);
  digitalWrite(relayIn4, LOW);
  delay(2000);

}
