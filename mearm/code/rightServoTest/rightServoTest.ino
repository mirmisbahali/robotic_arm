#include<Servo.h>

int servoPin = 5;
Servo myServo;
void setup() {
  // put your setup code here, to run once:
  myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
myServo.write(0);
delay(1000);
myServo.write(130);
delay(1000);
}
