int ledpin=13;

void setup() {
  
pinMode(ledpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  
if(Serial.available()>0)
{
  char data=Serial.read();
  if(data=='A')
  digitalWrite(ledpin,HIGH);
  else if(data=='B')
  digitalWrite(ledpin,LOW);
}
delay(1000);
}
