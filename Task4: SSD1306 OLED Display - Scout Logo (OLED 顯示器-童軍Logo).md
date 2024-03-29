<h1>Task 4. SSD1306 OLED Display - Scout Emblem (OLED 顯示器-童軍會徽)</h1><p>
<B>目的:</B><p>
1) 認識及使用SSD1306 OLED 顯示器顯示圖像-童軍Logo<br>
2) 認識及及安裝有關Library<br>
3) 認識程式編寫<br>
4) 利用FOR LOOP使圖像移動 
<p>
<B>工具:</B><p>
1) Arduino UNO Rev3 控制板X 1<br>
3) 10CM 紅色杜邦線 X 1<br>
4) 10CM 黑色杜邦線 X 1<br>
5) 10CM 白色杜邦線 X 1<br>
6) 10CM 灰色杜邦線 X 1<br>
7) SSD1306 OLED 單色顯示器 X 1<br>

 <B>參考資料:</B><br>  
 氣象組Arduino參考書P.41-43, 182<br>  
 
<h1>Connection Map 連接圖</h1><p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/OLED02.png"><P>
 <table><tr><td><B>Arduino UNO3</B></td><td><B>OLED</B></td></tr>
<tr><td>5V</td><td>VCC</td></tr>	
<tr><td>GND</td><td>GND</td></tr>
<tr><td>A4</td><td>SDA</td></tr>
<tr><td>A5</td><td>SCL</td></tr>	
</table> 
<P> 
<h1>Library</h1>
<i>有關下載及安裝Library，可以參考<a href="https://github.com/SCOUT-METEAM/1st_STEM_Course/blob/main/CH05%20Library%20Installation%20in%20Arduino%20IDE.md">CH05 Library Installation in Arduino IDE<a></i><p>
  
<B>方法1: 在Arduino IDE下載。</B><p>
在Arduino IDE library搜尋器內(Tools\Manage Libraries…)，輸入SSD1306，按下”輸入鍵”後，便會例出相關資料。<p>

選擇由Adafruit開發及他的version 2.5，並按下Install鍵安裝。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/OLED001c.png"><P>
<B>方法2: 從以下GITHUB直接下載及安裝</B><P>
Please download following libraries and install it into Arduino IDE first.
<br>
https://github.com/adafruit/Adafruit_SSD1306
<br>
https://github.com/adafruit/Adafruit-GFX-Library
<br><br>
<B>方法3: 在Arduino IDE加入我們提供的Library </B><br> <br>
在Arduino IDE按下Sketch/Include Library/Add .Zip Library..加入我們提供的Library
<br>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AddLibrary01.png"><br><br>
我們可以在 文件\Arduino\libraries檢查是否已加入上述Library<br><br>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AddLibrary02.png"><br><br>
<h1>Online image2cpp</h1><br>
在GITHUB，會尋到這個image2cpp的工具:https://github.com/javl/image2cpp<br>
在裡面有個online版的image2cpp http://javl.github.io/image2cpp ，大家可以在GITHUB直接download他們的HTML檔案使用，又或直接使用他們的online版。
<p><p>
如要將圖像在OLED上顯示，我們要將圖像轉化為數值，告知OLED顯示器那些地方有光，那些地方沒有。將圖像轉換成數值，可以使用上述image2cpp。<br>
<br>
在image2cpp網頁，選擇了圖片後，在2及3使用以下轉圖設定: <br>
 <B>2. Image Settings</B><br>
Canvas size: 128 X 64<br>
Background color: Black<br>
Invert Image colors: Yes 		<br>
Brightness: 128 <br>
Scaling: Scale to fit, keeping proportions<br>
<br>
<B>3. Output</B><br>
Code output format: Arduino code<br>
Draw mode: Horizontal - 1 bit per pixel <br>
 
 
轉換後，將生成的一連串數值放在本將提供的程式內，有關數值需要放在以下程式碼的{ }內:<p><B>static const byte PROGMEM logo_draw[] ={ } </B><p>
<br>
上述的句子是一個Array(陣列)。而Array是變數(Variable)型態一種。其特點是可以儲存多個變數數值。而寫法格式是:<p>
<B>陣列名稱(可以自定名稱)[ ]={ }</B><p>
例子: logo_draw[ ] ={ }<p>
再嚴格地說，這個Array是byte Array，因為每個數值在這個Array內是不大於byte的範圍，即<=255。但是在轉換後的數值是0X00, 0XC0...等，不是我們常見的數字呀?? 其實，讀者看到的0X00, 0XC0...等數值是電腦常用的十六進制(Hexadecimal)數值，只要將0X00轉換成我們常用的十進制(Decimal)，0X00就等於0。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/OLED002.png"><p>
再深入些解釋，每個Array內數值是控制OLED顯示器上8個點。因為在上表，同樣可以轉換成二進制(binary)，即0及1。如0x12，就是0 0 0 1 0 0 1 0。那麼，便可知那個點是有光，那個點是沒有光。<p> <br>
 <img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/oled8bit.png"><p>
 <br><br>
 另外，讀者還見到PROGMEM、static、const等<B>關鍵字</B>在這條Array前。<p> 
PROGMEM: 指定Array放在flash (program) memory 內而不是記憶體SRAM內。<br> 
const: 指是不變常數。<br> 
static: 是指靜態，沒有變動。靜態建構函式只會執行一次，而該變數能在函式執行之後被保留下來。<br> <br> 
 <B>Ref: 氣象組Arduino參考書P.182 </B><br> 
<p> 
<h1>Arduino Coding</h1>
<pre><code>

//引入相關Libraries
#include <SPI.h> //Serial Peripheral Interface (SPI) is a synchronous serial data protocol 
#include <Wire.h> //Communicate with I2C / TWI devices.

#include <Adafruit_GFX.h> 
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // 設定OLED 寬度像素為128並放入SCREEN_WIDTH內, 在第49行使用。
#define SCREEN_HEIGHT 64 // 設定OLED 高度像素為64並放入SCREEN_HEIGHT內, 在第49行使用。

// 設定OLED
#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin) 
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET); //建立物件並命名為display。物件display繼承Adafruit_SSD1306 CLASS。

//自訂圖形，從Image2LCD轉過來的，尺寸是128x64
static const byte PROGMEM logo_draw[] =
{ 
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X06,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X06,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X0F,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X1F,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X3F,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X7F,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X01,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X03,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X07,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X07,0XFF,0XFE,0X00,0X00,0X00,0X02,0X00,0X00,0X10,0X00,0X00,0X00,0X00,
0X00,0X00,0X0F,0XFF,0XFE,0X00,0X00,0X00,0X03,0X00,0X00,0X38,0X00,0X18,0XFE,0X00,
0X00,0X00,0X0F,0XFF,0XFF,0X00,0X00,0X00,0X07,0XFF,0XE0,0X7F,0XC0,0X18,0XFE,0X00,
0X00,0X00,0X0F,0XFF,0XFF,0X00,0X00,0X00,0X0C,0X00,0X01,0XC1,0X80,0X32,0XC2,0X00,
0X00,0X00,0X0F,0XFF,0XFF,0X00,0X00,0X00,0X1D,0XFF,0XC3,0XFF,0XF0,0X36,0XC2,0X00,
0X00,0X00,0X0F,0XFB,0XFF,0X00,0X00,0X00,0X18,0X00,0X03,0XFF,0XF0,0X7E,0XC2,0X00,
0X00,0X00,0X0F,0XFB,0XFF,0X00,0X00,0X00,0X07,0XFF,0X81,0X86,0X10,0X7C,0XFE,0X00,
0X00,0X00,0X0F,0XF9,0XFE,0X00,0X00,0X00,0X07,0XFF,0X81,0XFF,0XF0,0X18,0XC2,0X00,
0X00,0X00,0X07,0XF9,0XFE,0X00,0X00,0X00,0X04,0XC9,0X80,0X1C,0X00,0X36,0XC2,0X00,
0X01,0XFC,0X07,0XF9,0XFE,0X07,0XF8,0X00,0X06,0XD9,0X80,0XFC,0X10,0X36,0XC2,0X00,
0X07,0XFF,0X07,0XF9,0XFE,0X1F,0XFE,0X00,0X00,0XC1,0X83,0XCE,0X70,0XFE,0XFE,0X00,
0X0F,0XFF,0XC3,0XF9,0XFC,0X3F,0XFF,0X00,0X1F,0XFF,0X80,0X3B,0XC0,0X72,0XFE,0X00,
0X1F,0XFF,0XE3,0XF9,0XFC,0X7F,0XFF,0X80,0X00,0XC1,0X83,0XE7,0X80,0X06,0XC2,0X00,
0X3F,0XEF,0XF3,0XF9,0XFC,0XFF,0XFF,0XC0,0X02,0XD9,0XA3,0X1F,0XC0,0X7A,0XC2,0X00,
0X3F,0X9F,0XF9,0XF5,0XF9,0XFD,0XAF,0XC0,0X0E,0XDD,0XA0,0XF3,0X78,0X5A,0XC2,0X00,
0X7E,0X07,0XF9,0XF5,0XF9,0XFF,0XAF,0XE0,0X1C,0XCE,0XE3,0X9F,0X1C,0XD9,0XFF,0X80,
0X7F,0X8F,0XFD,0XF6,0XF3,0XFB,0X07,0XE0,0X00,0XC4,0XC0,0X1E,0X00,0X51,0XFF,0X00,
0X7E,0X53,0XFC,0XF6,0XF3,0XFD,0XEF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X7F,0X0F,0XFE,0XF6,0XF7,0XFF,0X31,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X7F,0X0F,0XFE,0XF6,0XE7,0XFC,0X9B,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X7F,0X6F,0XFF,0X76,0XEF,0XFB,0X87,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X7F,0XFF,0XFF,0X76,0XEF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X3F,0XFF,0XFF,0X76,0XCF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X3F,0XFE,0X3F,0XA6,0XDF,0XC7,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X1F,0XF8,0X0F,0XAE,0XDF,0X01,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X1F,0XF0,0X0F,0XAE,0XDE,0X00,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X07,0XF0,0X07,0XAF,0X3E,0X00,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X03,0XE0,0X3F,0XFF,0XFF,0X80,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X2C,0XE7,0X12,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X27,0XB6,0XB8,0X40,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X3F,0XF7,0X5A,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X1F,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X07,0XCE,0XBE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0X0F,0XF6,0XBF,0X08,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0XFF,0XB6,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0XFF,0XB6,0XDF,0XF8,0X00,0X00,0X08,0X9D,0XEF,0X31,0X10,0X73,0XC7,0X00,
0X00,0X01,0XFF,0X35,0XDF,0XF8,0X00,0X00,0X0D,0X90,0X48,0X31,0XB0,0X8A,0X28,0X00,
0X00,0X01,0XFF,0X79,0XCF,0XF8,0X00,0X00,0X0D,0X9C,0X4E,0X29,0XB0,0X8A,0X48,0X00,
0X00,0X00,0XFC,0X79,0XE7,0XF0,0X00,0X00,0X0C,0X90,0X48,0X79,0XB0,0X8A,0X89,0X00,
0X00,0X00,0X30,0X79,0XE1,0XC0,0X00,0X00,0X0A,0X90,0X48,0X49,0X52,0XCA,0X49,0X00,
0X00,0X00,0X00,0XFF,0XF0,0X00,0X00,0X00,0X0A,0X9C,0X4F,0X45,0X52,0X32,0X27,0X00,
0X00,0X00,0X00,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X01,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X03,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X7F,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
};

void setup() 
{
  Serial.begin(115200);
  
  // 偵測是否安裝好OLED了
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) // 一般1306 OLED的位址都是0x3C
  { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  // 顯示Adafruit的LOGO，算是開機畫面
  // display.display();
  // delay(1000);           // 停1秒

  display.clearDisplay();  // 清除畫面

  drawingtest();          // 顯示圖形

}

void loop() 
{
  
}

//顯示圖形 FUNCTION
void drawingtest(void) 
{
  display.clearDisplay();
  
  //顯示圖形，x,y,圖形文字,寬,高,1:OLED預設的顏色(這個會依該OLED的顏色來決定)
  display.drawBitmap(0,0,logo_draw, 128, 64, 1);
  
  display.display();  // 要有這行才會把文字顯示出來
  delay(1000);
}
 
</code></pre>

Ref:<br>
PROGMEM <br>- Store data in flash (program) memory instead of SRAM. <br>
https://www.arduino.cc/reference/en/language/variables/utilities/progmem/


<h1>圖像移動</h1>
如果我們<B>更改顯示圖形 FUNCTION</B>的內容，加入以下程式又會怎樣?<br>
A) 加入FOR LOOP，將水平顯示位置放入變數i<br>
B) delay()括號內改10;<br>
C) 加入display.clearDisplay()在FOR LOOP最後;<br>
<pre><code>
void drawingtest(void)
{
  display.clearDisplay();
  //顯示圖形，x,y,圖形文字,寬,高,1:OLED預設的顏色(這個會依該OLED的顏色來決定)
  for(int i=128;i>=0;i--) //開始值是128，每次行完1次FOR LOOP後減1，直到0
  {
    display.drawBitmap(i,0,logo_draw, 128, 64, 1);
    display.display();  // 要有這行才會把文字顯示出來
    delay(10);
    display.clearDisplay();
  }
 }
</pre><code>

如果圖像不斷向左走，當走完整個圖像，又出現新圖像向左走，你們會怎樣改? <B>詳情請參考ARDUINO CODING</B>
