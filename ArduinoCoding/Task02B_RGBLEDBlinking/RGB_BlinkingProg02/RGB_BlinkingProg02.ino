//設定變數
//byte是變數型態可儲存0-255數值範圍，比較細的變數，佔用記憶體也較小。const是指常數不會改。
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
  digitalWrite(blue, HIGH); //在digitalWrite內放入指定變數
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
