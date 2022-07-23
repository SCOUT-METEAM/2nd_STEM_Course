void setup() 
{
  for(byte i=2;i<=4;i++)
  {
   pinMode(i, OUTPUT);
  }
}

void loop()
{
for(byte i=2;i<=4;i=i+2)
{
digitalWrite(i, HIGH);
}
delay(1000);

for(byte i=2;i<=4;i=i+2)
{
digitalWrite(i, LOW);
}
delay(1000);
}
