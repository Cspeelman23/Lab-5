#include <Servo.h>
Servo servy;
int sPin = 5;
int potPin = A0;
int val;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
servy.attach(sPin);//attach servo on pin 5 (sPin) to the Servo object
}

void loop() {
  // put your main code here, to run repeatedly:
  val= analogRead(potPin);
  Serial.println(val);
  val = map(val, 410, 870, 0, 180);
  servy.write(val);
  delay(15); //avoid jitters

}
