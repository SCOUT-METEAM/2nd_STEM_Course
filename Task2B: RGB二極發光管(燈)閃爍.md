<h1>Task 2B. RGB二極發光管(燈)模塊閃爍</h1><p>

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
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/T02LED_b.png" alt="right"><p>


  
<h1>Arduino Coding 程式碼</h1>
<BR>
<h1>Arduino Coding 程式碼01</h1>
<pre><code>
void setup() 
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() 
{
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
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

<h1>Arduino Coding 程式碼02</h1>
<pre><code>
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
  digitalWrite(blue, HIGH);
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
 
 <h1>Arduino Coding 程式碼03</h1>
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
