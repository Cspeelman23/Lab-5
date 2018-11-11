int switchPin = 2;
int enablePin = 9;
int motorPin = 3;
int motorPin2 = 4;


void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT);
  pinMode(enablePin,OUTPUT);
  pinMode(motorPin,OUTPUT);
  pinMode(motorPin2,OUTPUT);

  digitalWrite(enablePin, HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int switchVal = digitalRead(switchPin);
  if(switchVal == HIGH){
    digitalWrite(motorPin,HIGH);
    digitalWrite(motorPin2,LOW);

  }else{
    digitalWrite(motorPin2,HIGH);
    digitalWrite(motorPin,LOW);
  }

}
