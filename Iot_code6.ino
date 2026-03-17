#define LED 7
#define Led  4
#define button 12
#define Button 8

void setup() {
 Serial.begin(9600);
 pinMode(LED, OUTPUT);
 pinMode(Led, OUTPUT);
 pinMode(button, INPUT);
 pinMode(Button, INPUT);
}

void loop() {
    bool  x = digitalRead(button);
    bool  y = digitalRead(Button);
if(x==1){
  digitalWrite(LED,HIGH);
}
  if(y==1){
  digitalWrite(Led,HIGH);
  }
else{
  digitalWrite(LED,LOW);
  digitalWrite(Led,LOW);
}
}
