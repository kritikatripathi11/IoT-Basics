#define LED 2
#define button 8

void setup() {
 Serial.begin(9600);
 pinMode(LED, OUTPUT);
 pinMode(button, INPUT);
}

void loop() {
    bool  x = digitalRead(button);
if(x==1){
  digitalWrite(LED,HIGH);
}
else{
  digitalWrite(LED,LOW);
}
}
