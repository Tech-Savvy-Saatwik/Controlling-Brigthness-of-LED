int potPin=A0;
int LED[]={3,5,6,9};
int potVal;
int brightness;
void setup() 
{
  for (int i = 0; i < 4; i++) 
  {
    pinMode(LED[i], OUTPUT);  
  }
  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(potPin);
  Serial.println(potVal); 
  brightness = map(potVal, 0, 1023, 0, 255);

  for (int i = 0; i < 4; i++) {
    analogWrite(LED[i], brightness);
  }
}