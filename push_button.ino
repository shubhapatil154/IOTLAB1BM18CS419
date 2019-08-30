int ledPin1=13;
int ledPin2=2;
void setup() {
 pinMode(ledPin1,OUTPUT);
 pinMode(ledPin2,INPUT);
 
}

void loop() {
  int press=digitalRead(ledPin2);
  if(press==HIGH)
  {
    digitalWrite(ledPin1,HIGH);
  }
  else
  {
    digitalWrite(ledPin1,LOW);
  }


}
