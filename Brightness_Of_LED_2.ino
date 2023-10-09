int potPin=A2;
int redPin=9;
int potVal;
float ledVal;


void setup() {
  // put your setup code here, to run once:
pinMode(potPin,INPUT);
pinMode(redPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal=analogRead(potPin);
ledVal=(255./1023.)*potVal;
analogWrite(redPin,ledVal);
Serial.println(ledVal);
}
