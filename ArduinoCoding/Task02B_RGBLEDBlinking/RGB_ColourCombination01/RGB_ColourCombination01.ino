
void setup() 
{
  for(byte i=2;i<=4;i++)
  {
   pinMode(i, OUTPUT);
  }
}

void loop()
{
digitalWrite(2, HIGH);
digitalWrite(4, HIGH);
delay(1000);
digitalWrite(2, LOW);
digitalWrite(4, LOW);
delay(1000);
}
