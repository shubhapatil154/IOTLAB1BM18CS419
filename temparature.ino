int temp=0;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  float rv=analogRead(temp);
  float mv=(rv/1024.0);
  float c=mv/10;
  Serial.println(c);
  Serial.print("Celsius");
  Serial.println((c*9)/5 + 32);
  Serial.print("Degree fahrenheit");
  delay(1000);
}
