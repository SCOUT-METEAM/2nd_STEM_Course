<h1>LED 燈閃爍</h1><p>

目的:
1) 認識完整電路(Complete Circuit)及電阻。
2) 學習如何在Arduino IDE 編寫程式，使LED 燈閃爍。
3) 學習如何將已編寫好的程式上傳到Arduino 控制板。
4) 認識程式中變數(Variable)，函數(Function)，pinMode()，digitalWrite()等。

<h1>Connection Map 連接圖</h1><p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/T02LED.png" alt="right"><p>

 Arduino UNO3腳位: 3 
  
<h1>Arduino Coding 程式碼</h1>
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
