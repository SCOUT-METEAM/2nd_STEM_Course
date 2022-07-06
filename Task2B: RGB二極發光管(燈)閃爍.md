<h1>Task 2B. RGB二極發光管(燈)模塊閃爍</h1><p>

二極發光管(LED燈)需要接駁一個電阻以防止LED燈燒掉。有關內容可參考Task2A: Blinking LED (LED 燈閃爍)的Resistor電阻章節。此實驗採用的RGB二極發光管模塊已經內嵌電阻。
 
<B>目的:</B>
1) 認識模塊及使用。
2) 學習如何在Arduino IDE 編寫程式，使LED 燈閃爍。
3) 學習如何將已編寫好的程式上傳到Arduino 控制板。
 
<p>
 
 <B>工具:</B>
1) Arduino UNO Rev3 控制板X 1
2) 10CM 紅色杜邦線 X 1
3) 10CM 藍色杜邦線 X 1
4) 10CM 綠色杜邦線 X 1
5) 10CM 黑色杜邦線 X 1
6) RGB二極發光管(燈)模塊 X 1
  
<h1>Connection Map 連接圖</h1><p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/RGB_b.png" alt="right"><p>

<table><tr><td><B>Arduino UNO3</B></td><td><B>RGB二極發光管(燈)模塊</B></td></tr>
<tr><td>GND</td><td>GND</td></tr>	
<tr><td>2</td><td>B</td></tr>		
<tr><td>3</td><td>G</td></tr>	 
<tr><td>4</td><td>R</td></tr>	 
</table>
<BR>
 在RGB二極發光管(燈)模塊上，已有三個電阻安裝在模塊上。好處是我們不需再連接電阻，比較方便。
<BR> 
<h1>Arduino Coding 程式碼</h1>
<BR>
 有關<B>"RGB藍、綠、紅單色分別閃爍"，有三種寫法</B>。目的是想給讀者比較。尤其是第三種，是用了for Loop，可以減少重覆編碼(Coding)，從而減少硬體佔用空間。至於<B>"混合2種顏色"</B>的Coding，分別有2種供讀者比較。在這裡，會使用藍及紅LED燈會同時著，結果會出現紫色。
<BR><BR>  
程式碼主要使用<B> pinMode(), digitalWrite() 及delay()</B> 三個Arduino IDE內置程式。只要我們<B>跟足大小階及輸入其括號內數值</B>便可以使用。 
<BR><BR>   
<B>pinMode()</B>主要是設定工作，設定那個ARDUINO UNO3上的DIGITAL(數位)針腳將會用作電壓輸出。所以是要執行一次便可以了。因此我們會將pinMode()放在void setup(){}FUNCTION內。
<BR><BR>  
使用pinMode()時，要在括號內輸入2個數值, 分別是那個DIGITAL針腳編號及輸出電壓指示。以ARDUINO UNO3上的2號數位針腳為例，寫法是 pinMode(2, OUTPUT)。2號數位針腳便會只是作輸出電壓。
<BR><BR>
<B>digitalWrite()</B>是給予已用pinMode()設定好數位針腳輸出高電壓(有電)或底電壓(即沒有電)。digitalWrite()的括號內也輸入2個數值。分別是那個DIGITAL針腳編號及是高或底電壓。 
<BR><BR>
以ARDUINO UNO3上的2號數位針腳為例，如是高電壓，寫法是digitalWrite(2, HIGH)。底電壓則是digitalWrite(2, LOW)。我們會使用這兩者交替，使LED燈閃爍。
<BR><BR>
最後是<B>delay()</B>，造個是延遲。而括號內就是設定時間，時間預設單微秒(ms)。所以delay(1000)是延遲1秒。  
<BR><BR>  
注意: 讀者會見到程式碼內有<B>;</B>位置。分號作用是代表完結。我們會執行一次FUNCTION，如 delay(1000)後便加一個分號。<BR><BR>  
<h1>Arduino Coding 程式碼(RGB藍、綠、紅單色分別閃爍)01</h1>
<pre><code>
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
</code></pre><p>
當在ARDUINO IDE按下除錯或上傳按鈕後，便會看到佔用了多少硬件資源。 <p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/Task2B_IDE01.png" alt="right"><p>
<B>Compiling:</B> 當我們寫完程式後，IDE在上傳到UNO3前要將程式轉換成機械碼1010....供UNO3執行。compiling就是這意思!<p>
<h1>Arduino Coding 程式碼(RGB藍、綠、紅單色分別閃爍)02</h1>
這裡是使用三個變數(Variables)，分別代表三種LED輸出針腳的數值。例如Arduino UNO3上的針腳2是連接到藍色LED燈，那麼便設定為2。在這裡使用變數的好處是，如果日後改針腳連接位置，只需改動程式內開頭位置，不需改動程式內引用地方。<BR><BR>使用變數需要設定變數類型(如byte)。變數類型是程式語言預先設定好的數值, 尤其是變數大小，讀者可參考<B>CH06 Variables</B>。變數類型會加在自己命名的變數名稱前，並以空格分開。使用那種變數類型，主要考慮硬體資源，尤其是記憶體大小及該變數將會裝多少數值。如以此例子，我們預計放入變數內的數值最大是個位正數，所以byte已足夠。因為byte儲存數值範圍是8bit，即0-255數值範圍。讀者要留意，每建立一個變數，便會在記憶體建立一個實體空間供該變數使用。
<pre><code>
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
</code></pre><p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/Task2B_IDE02.png" alt="right"><p>
<h1>Arduino Coding 程式碼(RGB藍、綠、紅單色分別閃爍)03</h1>
在這裡會使用for loop以減少重覆的程式碼。請與Arduino Coding 程式碼(RGB藍、綠、紅單色分別閃爍)01比較。
<pre><code>
void setup() 
{
  for(byte i=2;i<=4;i++)
  {
   pinMode(i, OUTPUT);
  }
}

void loop() 
{
  for (byte i=2;i<=4;i++)
  {
    digitalWrite(i, HIGH);
    delay (1000);
    digitalWrite(i, LOW);
    delay (1000);
  }
}
</code></pre><p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/Task2B_IDE03.png" alt="right"><p>
<h1>Arduino Coding 程式碼(混合2種色)01</h1>
<pre><code>
void setup() 
{
  for(byte i=2;i<=4;i++)
  {
   pinMode(i, OUTPUT);
  }
}

void loop() 
{
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  delay(1000);
}
</code></pre><p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/Task2B_IDE04.png" alt="right"><p> 
<h1>Arduino Coding 程式碼(混合2種色)02</h1>
<pre><code>
void setup() 
{
  for(byte i=2;i<=4;i++)
  {
   pinMode(i, OUTPUT);
  }
}

void loop() 
{
  for(byte i=2;i<=4;i=i+2)
  {
  digitalWrite(i, HIGH);
  }
  delay(1000);
  
  for(byte i=2;i<=4;i=i+2)
  {
  digitalWrite(i, LOW);
  }
  delay(1000);
}
</code></pre><p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/Task2B_IDE05.png" alt="right"><p>

<B><h1>控制LED燈光度</h1></B>
如果使用上述digitalWrite()，有沒有發覺LED燈的光度只有一種，不能調較?這是digitalWrite()數位訊號的問題。因為數位只有高與底，沒有連續特性。如果要做到有不同光暗效果，我們便要使用有連續特性的Analog(類比訊號)。<BR>
Arduino UNO3上有一些類比訊號輸出的腳位，這些腳位名稱是PWM。這些輸出腳位有~形標記，分別是3, 5, 6, 9, 10, 11。另外，在程式碼內，我們使用analogWrite()作有關使用。analogWrite()內需要輸入2個數值，分別是腳位及類比訊號強度。有關強度數值是0-255。這樣我們便可以控制LED燈光度了。

<pre><code>
void setup() 
{
pinMode(3,OUTPUT);
}

void loop() 
{
analogWrite(3,10);
delay(1000);
analogWrite(3,0);
analogWrite(3,100);
delay(1000);
analogWrite(3,0);
analogWrite(3,255);
delay(1000);
analogWrite(3,0);
}
</code></pre><p>

REF: <BR>
Basics of PWM (Pulse Width Modulation) <BR>
https://docs.arduino.cc/learn/microcontrollers/analog-output
