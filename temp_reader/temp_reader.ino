int readPin = A0;
float readValue, calcValue,Temp,scale_f=0.01;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
readValue= analogRead(readPin);
calcValue=readValue*(5./1023.); 
Temp = calcValue/scale_f;
Serial.println(Temp);
delay(100);
}
