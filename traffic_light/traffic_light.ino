int delayTime = 2000;
void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT);
   pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,HIGH);
  delay(delayTime);
  digitalWrite(7,HIGH);
  delay(delayTime);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  delay(delayTime);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  delay(delayTime);
  digitalWrite(7,LOW);
}
