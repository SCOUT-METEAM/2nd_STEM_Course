<h1>Arduino Coding</h1>
<BR>
<pre><code>
const byte LED = 3;  //利用變數LED設定該變數是3(代表3號數位腳位)

//閃爍FUNCTION
void LEDBLINK()
{
digitalWrite(LED, HIGH); //設定那個腳位輸出是高電壓
delay(1000);             //停止, 以微秒為單位
digitalWrite(LED, LOW);  //設定那個腳位輸出是底(沒有)電壓
delay(1000);
}

//執行LED閃爍
void setup()
{
pinMode(LED, OUTPUT);  //設定那個腳位是輸出
}

void loop()
{
LEDBLINK();             //Call 閃爍FUNCTION
}

</code></pre>
