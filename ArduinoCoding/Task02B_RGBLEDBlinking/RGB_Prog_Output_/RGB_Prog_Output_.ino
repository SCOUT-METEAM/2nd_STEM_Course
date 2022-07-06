void setup() 
{
pinMode(3,OUTPUT);
}

void loop()
{
analogWrite(3,10);
delay(1000);
analogWrite(3,0);
analogWrite(3,100);
delay(1000);
analogWrite(3,0);
analogWrite(3,255);
delay(1000);
analogWrite(3,0);
}
