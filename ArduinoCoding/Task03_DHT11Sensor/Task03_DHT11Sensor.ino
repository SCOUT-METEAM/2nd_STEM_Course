#include "DHT.h"     //引入DHT11 Library

#define DHTPIN 15     // 設定連接DHT11感應器的數位腳位

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
