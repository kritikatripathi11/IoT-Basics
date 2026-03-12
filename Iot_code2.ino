#define my_led 7
#define led 2
#define u_led 4
void setup (){
 Serial.begin(9600);
 pinMOde(my_led, OUTPUT);
 pinMode(led, OUTPUT);
 pinMode(u_led, OUTPUT);
}

void loop() {
  
  digitalWrite(my_led, HIGH);
  Serial.println("LED IS ON");
  delay(1000);
  digitalWrite(my_led, LOW);
  Serial.println("LED IS OFF");
  delay(1000);
  digitalWrite(led, HIGH);
  Serial.println("LED IS ON");
  delay(1000);
  digitalWrite(my_led, LOW);
  Serial.println("LED IS OFF");
  delay(1000);
  digitalWrite(u_led, HIGH);
  Serial.println("LED IS ON");
  delay(1000);
  digitalWrite(my_led, LOW);
  Serial.println("LED IS OFF");
  delay(1000);
  
}
