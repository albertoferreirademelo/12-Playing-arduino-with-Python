int lightPin = 0;
int red1Pin = 11;
int blue1Pin = 10;
int green1Pin = 9;
int red2Pin = 6;
int blue2Pin = 5;
int green2Pin = 3;
boolean safe = 1;

void setup(){
  Serial.begin(9600);
  pinMode(red1Pin, OUTPUT);
  pinMode(blue1Pin, OUTPUT);
  pinMode(green1Pin, OUTPUT);
  pinMode(red2Pin, OUTPUT);
  pinMode(blue2Pin, OUTPUT);
  pinMode(green2Pin, OUTPUT);
}

void loop(){  
  int val = analogRead(lightPin);
  
  if (val < 400){
    safe = -safe;
    Serial.println("1");
    delay(1000);
  }
  if (val > 400 && safe == 1){
    analogWrite(red1Pin, 255);
    analogWrite(blue1Pin, 255);
    analogWrite(green1Pin, 0);
    analogWrite(red2Pin, 255);
    analogWrite(blue2Pin, 255);
    analogWrite(green2Pin, 0);
  }
  else{          
    analogWrite(red1Pin, random(0,255));
    analogWrite(blue1Pin, random(0,255));
    analogWrite(green1Pin, random(0,255));
    analogWrite(red2Pin, random(0,255));
    analogWrite(blue2Pin, random(0,255));
    analogWrite(green2Pin, random(0,255));
    delay(50);    
  }
}

