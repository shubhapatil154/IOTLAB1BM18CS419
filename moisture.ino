#include <Servo.h>
Servo myservo;
int pos=0;
int sensorPin=0;
int sensorValue=0;

void setup() {
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
  sensorValue=analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue>900)
  {
    for(pos=0;pos<180;pos+=1)
    {
      myservo.write(pos);
      delay(10);
     }
     for(pos=180;pos>0;pos-=1)
     {
      myservo.write(pos);
      delay(10);
     }
  }
  delay(1000);

}
