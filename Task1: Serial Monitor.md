<h1>Arduino Coding</h1>
<br>
<pre><code>
void setup()
{ 
Serial.begin(115200);       //啟動Serial Communication，設定速度(baud rate)為115200
}

void loop() 
{ 
Serial.print("Test01");     //print是例印
Serial.println("Test02");   //println是例印完後便隔行
}
</code></pre>
