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
  
 Arduino UNO3控制板的Digital腳位輸出電壓是5V，所以多出的電壓是5V-2V=3V。我們可以用以下<B>Ohm's law</B>公式，計算出所需電阻值以消除多出電壓。<P>
  
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

//閃爍FUNCTIONZ
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

</code></pre><p>
<h1>變數(Variables)</h1><p>
變數，在程式編寫時會經常用到。可以想像，變數是一個紙箱，用來裝東西。但是這個紙箱有不同大小。<p>在程式編寫實際例子，變數可用來裝數值、文字等。而變數有不同大小，但是，該大小是由程式語言預設，不能更改。所以，要認識不同變數型態(Types)及運用。<p>
當程式開始運行時，如有變數，電腦的記憶體會預留空間給予該變數。以下是兩類變數例子，byte及int(當然不止兩類!)。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/T02LED02.png"><p><p>
從上圖中，可見byte所佔的空間比int小。的確，在Arduino UNO3，byte所佔空間是8 bit(可裝0-255數值)，而int所佔空間是16 bit(可裝-32,768至32767數值)。<B>byte及int階是屬於整數，不能裝小數。如要裝小數，就要用float。</B><p>
正如本章例子的coding，我們會在開首用變數LED裝住3這個數值。在之後的程式碼，當遇到要用3這個數字的地方，可以輸入該變數名稱，程式便自然將3放入該地方。這好處是，如果日後要改變3這個數值，只需要在開首該變數設定地方更改一次便可以了。
上述利用變數，在開首定義一個數值，其實可以用#define來做。其實，用#define好處是可減少記憶體佔用空間。例子#define LED 3。<p>

const是常數意思。指示之後的變數內數值是不變。<p>
 
<B>變數宣告:</B><p>
<B>變數資料型態   變數名稱(可以自己改)</B><p>
<B>***變數資料型態是關鍵字，要根據程式語言設定輸入。大小寫跟足，不能亂改。</B> <p>
 例子: byte LED = 3; <p>

<h1>Function</h1><p>
以下是宣告方法: <p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/func01.png"><p> 
傳回資料型態是變數型態，是關鍵字，要根據程式語言設定輸入。大小寫跟足，不能亂改。而名稱則可以，可自己改名。<p> 
本章程式例子，可見有void LEDBLINK(){　｝，void Setup(){　｝、void loop(){　｝階是function。 而當中的void就是其中一種傳回資料型態。但是，void只是執行，不會傳回(輸出)任何數值。<p> 
當我們在其他地方想引用有關function，可以CALL有關function。正如本章中的Arduino Coding內，這句LEDBLINK();就是CALL回有關LEDBLINK() function。
以下是另一款有傳回值的例子: <p> 
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/func02.png"><p> 
<p>
Function寫好，可以
