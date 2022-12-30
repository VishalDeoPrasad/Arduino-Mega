#include<Servo.h>
Servo Myservo;
int pos;

void setup(){
  Myservo.attach(3);
}

void loop(){
  Myservo.write(25);
  delay(300);
  Myservo.write(0);
  delay(500);
  
}
