#define my_led 7

void setup() {
 Serial.begin(9600);
 pinMode(my_led, OUTPUT);

}

void loop() {
 
  while(true){
  digitalWrite(my_led, HIGH);
  Serial.print\n("LED IS ON");
  delay(1000);
  digitalWrite(my_led, LOW);
  Serial.print\n("LED IS OFF");
  delay(1000);

  
  }
}
