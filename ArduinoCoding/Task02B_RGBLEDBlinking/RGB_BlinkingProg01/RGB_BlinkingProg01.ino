void setup() 
{
  pinMode(2, OUTPUT); //設定Arduino UNO3上的針腳2為輸出電壓
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
digitalWrite(2, HIGH); //給予Arduino UNO3上的針腳2高電壓
delay(1000);           //延遲1秒，1000是以微秒(ms)為單位
digitalWrite(2, LOW); //給予Arduino UNO3上的針腳2底電壓，即沒有電
delay(1000);
digitalWrite(3, HIGH);
delay(1000);
digitalWrite(3, LOW);
delay(1000);
digitalWrite(4, HIGH);
delay(1000);
digitalWrite(4, LOW);
delay(1000);
}
