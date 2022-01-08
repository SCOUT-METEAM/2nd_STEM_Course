void setup()
{ 
Serial.begin(115200);       //啟動Serial Communication，設定速度(baud rate)為115200
}

void loop()
{
Serial.print("ScoutHK");     //print是例印
Serial.println("METEAM");   //println是例印完後便隔行
}
