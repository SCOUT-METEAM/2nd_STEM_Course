<h1>LED二極發光管(燈)閃爍</h1><p>

 <B>目的:</B>
1) 認識完整電路(Complete Circuit)及電阻。
2) 學習如何在Arduino IDE 編寫程式，使LED 燈閃爍。
3) 學習如何將已編寫好的程式上傳到Arduino 控制板。
4) 認識程式中變數(Variable)，函數(Function)，pinMode()，digitalWrite()等。
 
<p>
 
 <B>工具:</B>
1) Arduino UNO Rev3 控制板X 1
2) 麪包板 X 1
3) 10CM 紅色杜邦線 X 1
4) 10CM 黑色杜邦線 X 2
5) 220Ω電阻 X 1
6) LED 紅色燈 X 1
7) 9V 電池盒/電線X 1 或接駁電腦USB

 <h1>Resistor電阻</h1><p>
 
 <table>
  <tr><td colspan="3"><B>LED 燈規格</B></td></tr>
  <tr><td>LED燈</td><td>工作電壓範圍</td><td>工作電流</td></tr>
 <tr><td>紅光</td><td> 1.8~2.2V</td><td> 30mA</td></tr>
 <tr><td>黃光</td><td> 2.0~2.4V</td><td> 30mA</td></tr>
 <tr><td>綠光</td><td> 2.2~2.8V</td><td> 25mA</td></tr>
 </table>
 
 從以上LED 規格表格，可看出LED 燈大約使用2V及20mA工作電流。<P>
  
 Arduino UNO3控制板的Digital腳位輸出電壓是5V，所以多出的電壓5V-2V=3V。用以下公式便可以計算出電阻值。<P>
  
 <B>V=IR</B><br>
 3 = 0.02R<br>
 R=150Ω<br>
 
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
