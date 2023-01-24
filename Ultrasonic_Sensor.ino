int trigPin = 4;
int echoPin = 3;
void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
  digitalWrite(trigPin, LOW); // clean the trigPin
  Serial.begin(9600); 
}
void loop() {
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); // triger for 10 micro seconds
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH); // Read returns the sound wave travel time in microseconds
  int distance = duration * 0.034 / 2;   // Calculating the distance
  Serial.print("Distance: ");
  Serial.println(distance);
}
