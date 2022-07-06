const byte blue=2;
const byte green=3;
const byte red=4;

void setup() 
{
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() 
{
  digitalWrite(blue, HIGH);
  delay(1000);
  digitalWrite(blue, LOW);
  delay(1000);
  digitalWrite(green, HIGH);
  delay(1000);
  digitalWrite(green, LOW);
  delay(1000);
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  delay(1000);
}
