
void setup() {
  
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);


}

void loop() {
  
  digitalWrite(13,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  delay(5000);
  digitalWrite(13,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  delay(4000);
  

}
