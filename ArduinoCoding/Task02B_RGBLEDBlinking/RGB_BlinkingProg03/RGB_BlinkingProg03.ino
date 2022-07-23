void setup() 
{
  for(byte i=2;i<=4;i++) //For Loop
  {
  pinMode(i, OUTPUT);
  }
}

void loop() 
{
  for (byte i=2;i<=4;i++) 
  {
   digitalWrite(i, HIGH);
   delay (1000);
   digitalWrite(i, LOW);
   delay (1000);
  }
}
