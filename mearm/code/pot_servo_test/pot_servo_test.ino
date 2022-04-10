#include<Servo.h>

int potPin = 0;
int servoPin = 3;
int servoPos = 0;
Servo myServo;
void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  myServo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potRead = analogRead(potPin);
  servoPos = 0.1466*potRead;
  Serial.println(potRead);
  Serial.print("Servo Pos: ");
  Serial.println(servoPos);
  myServo.write(servoPos);
}
