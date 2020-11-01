int lightPin = 0;
int a;

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  a = analogRead(lightPin);
  Serial.println (a);
  delay(1000);
}
