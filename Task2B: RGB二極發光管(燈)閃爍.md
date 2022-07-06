<h1>Task 2B. RGB二極發光管(燈)模塊閃爍</h1><p>

二極發光管(LED燈)需要接駁一個電阻以防止LED燈燒掉。有關內容可參考Task2A: Blinking LED (LED 燈閃爍)。此實驗採用的RGB二極發光管模塊已經內嵌電阻。
 
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

<h1>Arduino Coding 程式碼(RGB藍、綠、紅單色分別閃爍)02</h1>
這裡是使用三個變數，分別代表三種LED輸出針腳的數值。例如Arduino UNO3上的針腳2是連接到藍色LED燈，那麼便設定為2。在這裡使用變數的好處是，如果日後改針腳連接位置，只需改動程式內開頭位置，不需改動程式內引用地方。
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
