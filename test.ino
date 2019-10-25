int ledPin1=10;
int ledPin2=11;
int pirPin=0;
int sensedValue = 0;
int mappedValue = 0;
double duration = 20.00;
void setup() {
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(pirPin,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  sensedValue = analogRead(pirPin);
  Serial.print("Sensed Value: ");
  Serial.println(sensedValue);
  mappedValue = map(sensedValue,0,1024,0,255);
  Serial.print("Mapped Value: ");
  Serial.println(mappedValue);
    for(int i=0;i<sensedValue;i++)
    {
      analogWrite(ledPin1,mappedValue);
      analogWrite(ledPin2,LOW);
      delay(100);
    }
    for(int i=0;i>sensedValue;i++)
    {
      analogWrite(ledPin2,mappedValue);
      analogWrite(ledPin1,LOW);
      delay(100);
    }
}
