<h1>Task 3. DH11溫度濕度計</h1><p>
<B>目的:</B><p>
1) 認識及使用DHT11量度溫度及濕度<br>
2) 認識及及安裝有關Library<br>
3) 認識程式編寫<br>
<p>
<B>工具:</B><p>
1) Arduino UNO Rev3 控制板X 1<br>
3) 10CM 紅色杜邦線 X 1<br>
4) 10CM 黑色杜邦線 X 1<br>
5) 10CM 橙色杜邦線 X 1<br>
6) DHT11 X 1<br>
 
<h1>Connection Map 連接圖</h1><p>

<h1>Library安裝</h1>
<i>有關下載及安裝Library，可以參考<a href="https://github.com/SCOUT-METEAM/1st_STEM_Course/blob/main/CH05%20Library%20Installation%20in%20Arduino%20IDE.md">CH05 Library Installation in Arduino IDE<a></i><P>
  
<B>方法1: 在Arduino IDE下載。</B><P>
在Arduino IDE library搜尋器內(Tools\Manage Libraries…)，輸入DHT11，按下”輸入鍵”後，便會例出相關資料。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AL02.png"><p>
選擇由Adafruit開發及他的version 1.4.3，並按下Install鍵安裝。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AL03.png"><p>
<B>方法2: 從以下GITHUB直接下載及安裝</B><P>
https://github.com/adafruit/DHT-sensor-library
<br>
https://github.com/adafruit/Adafruit_Sensor
<br>
<h1>Arduino Coding</h1>
<br>
以下CODING是來自Adafruit DHT Sensor Example，請同時對照Adafruit Example及Adafruit DHT11 Libraries檔案(DHT.h及DHT.cpp)一同學習。
<br>
<br>
<pre><code>
#include "DHT.h"     //引入DHT11 Library

#define DHTPIN 2     // 設定連接DHT11感應器的數位腳位

#define DHTTYPE DHT11   // 設定DHT 感應器類型

DHT dht(DHTPIN, DHTTYPE); //繼承及建立DHT11物件並命名為dht

void setup() 
{
  Serial.begin(115200);
  Serial.println(F("DHTxx test!"));

  dht.begin();  //dht繼承了CLASS DHT，使用CLASS DHT內其中一個function, 名叫begin()。此function是啟動DHT11。

}

void loop() 
{

  delay(2000);

  float h = dht.readHumidity(); //將濕度資料放入變數h作之後使用。變數h資料型態是float。

  float t = dht.readTemperature();

  float f = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  // Compute heat index in Fahrenheit (the default)
  float hif = dht.computeHeatIndex(f, h);
  
  // Compute heat index in Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(F("°C "));
  Serial.print(f);
  Serial.print(F("°F  Heat index: "));
  Serial.print(hic);
  Serial.print(F("°C "));
  Serial.print(hif);
  Serial.println(F("°F"));

}

</pre></code>
  
打開Serial Monitor會看到以下DHT11讀數<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/DHT11001.png"><p>
