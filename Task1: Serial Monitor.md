<h1>Serial Monitor</h1><p>
Arduino IDE內，有一個工具，名稱是Serial Monitor。可以在   打開。<p>
不知道大家有沒有想過，如果我們接駁了一個DHT11溫度濕度感應器，在沒有顯示器下，我們又怎樣知道有關溫度及濕度讀數?因此，Arduino IDE提供了Serial Monitor工具，只要我們在程式中加入有關顯示程式，我們便可以透過Serial Monitor顯示有關讀數。<p>
如要使用Serial Monitor，我們首先要用USB線連接Arduino UNO3，並編寫有關程式及設定相關Baud Rate。這個Serial Monitor是透過Serial Communication傳送資料，是IBM上世紀產物。用作電子儀器之間的通訊。Serial Communication在通訊時電子儀器之間需要有共同的Baud Rate，即每秒有多少bit Data傳送。bit Data不是胡亂設定，有特定數值。小編通常記下兩個115200及9600。有關數值，其實也可以在Arduino IDE的Serial Monitor右下角找到(要先連接Arduino UNO3)。<p>
  <i>(現在電腦少用COMPORT了，這些COMPORT都是Serial Communication。)</i><p>
  
<h1>Arduino Coding</h1>
<br>
<pre><code>
void setup()
{ 
Serial.begin(115200);       //啟動Serial Communication，設定速度(baud rate)為115200
}

void loop() 
{ 
Serial.print("Test01");     //print是例印
Serial.println("Test02");   //println是例印完後便隔行
}
</code></pre>
<h1>Arduino Coding Explanation</h1><p>
以上Arduino Coding十分簡單，只要有兩或三句程式便可以印出資料。<p>
<B>第一句:</B><p>
<B>Serial.begin(115200);</B>是啟動Serial Communication並設定傳送速度(baud rate)為115200。這句包含.begin() function，通常放在Void Setp()內。因為Arduino IDE預先設定Void Setp(){ }內的程式，當Arduino UNO3一通電後只會執行<B>一次</B>。電子零件，啟動一次已足夠了，不需要重覆。<p>
<B>Serial同begin()是關鍵字，不能改，大小寫要跟足。</B>begin()是function，已內嵌在Arduino IDE內並屬於Serial這個CLASS之下。所以Serial同begin()之間要有<B>"."</B>連接。<p> 
從造個例子，可以知道.begin() function就是有啟動功能。在其它Library，如DHT11 Library，也有.begin()的function。而這個.begin()，在建立物件後通常放在Void Setp()內。當Arduino UNO3一通電後，便可以即時啟動<B>一次</B>，使到DHT11 溫度濕度感應器可以在Arduino UNO3通電後即時啟動，並進行之後量度。
<p>
<B>第二/三句:</B><p>  
<B>Serial.print("Test01"); 及Serial.println("Test02"); </B>.print()是例印，印出()內的文字(String)。()內的文字需要有""包住。而.println()也是例印，印出()內的文字。但是，例印後，會自動跳行。
<p> 
void loop(){ }是looping function，Arduino IDE設定有不斷重覆功能。因此，void loop(){ }內的程式，將會不斷地執行。小編將這兩句printing程式放在void loop(){ }內，是想給大家看有怎樣結果。<p> 
<h1>應用例子</h1><p>
以下是使用DHT11讀取溫濕資料並顯示在Serial Monitor內。  
