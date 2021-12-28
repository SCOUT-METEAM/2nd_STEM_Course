<h1>LED 燈閃爍</h1><p>

目的:
1) 認識完整電路(Complete Circuit)及電阻。
2) 學習如何在Arduino IDE 編寫程式，使LED 燈閃爍。
3) 學習如何將已編寫好的程式上傳到Arduino 控制板。
4) 認識程式中變數(Variable)，函數(Function)，pinMode()，digitalWrite()等。
 
<p>
 
工具:
1) Arduino UNO Rev3 控制板X 1
2) 麪包板 X 1
3) 10CM 紅色杜邦線 X 1
4) 10CM 黑色杜邦線 X 2
5) 220Ω電阻 X 1
6) LED 紅色燈 X 1
7) 9V 電池盒/電線X 1 或接駁電腦USB

<h1>Connection Map 連接圖</h1><p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/T02LED.png" alt="right"><p>

 <B>Arduino UNO3使用腳位: GND，3</B> 
  
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
