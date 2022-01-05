<h1>Library & Class</h1><p>
Library & Class是寫程式一個重要概念。當我們加裝一個感應器，如連接DHT11溫度濕度到Arduino UNO3上，我們會預期可以即時使用。但是，電子零件需要軟件驅動才可以使用。那麼我們又怎樣可以編寫有關軟件?<p>
如要編寫軟件去啟動一個電子零件，可以是一件十分複雜的事。如上述提及的DHT11溫度濕度感應器，至少我們需要知道有關結構及資料傳送循環並編寫有關程式。無論對於初學者或經驗者，這些會比較困難及費時。幸好，通常廠商會公開有關程式供其使用者使用。GITHUB就是一個公開平台發佈有關程式。而且，又會有其他程式專才修改及再發佈。而有關程式，通常利用Class來包裝。只要我們<B>繼承</B>有關Class，便可以直接使用。因此，我們會通常會視Class是藍圖。有關程式，在Arduino，會以<B>".h"及".cpp"</B>儲存。
<p> 
藍圖概念: 嘗試想像，我們是一名工程師，現在要做一部車。那麼第一時間會尋找這部車的藍圖出來。這張藍圖記錄了車的外形、顏色、功能，如可是加速及減速等。按這張藍圖，我們可以生產出很多實物的車。而這些實物的車，就有藍圖中所記錄的特性及功能(<B>繼承</B>)。在程式概念，這些車的顏色就是PROPERTY(特性)，功能就是METHOD。
<p> 
<B>Class 繼承方法</B><p>

<table border=1><td><B> Class名稱 &nbsp &nbsp &nbsp &nbsp自定物件名稱</B></td></table>
例子: <p>
ScoutProg met;(參考本章Example Coding)<p>
<i>ScoutProg是Class名稱，是繼承的Class名稱，met是自定物件名稱，可是自己改名稱</i><br>
<h1>Library Installation</h1><p>
我們編寫了一個簡單的Library檔案，請下載 "scout.zip"，並利用Arduino IDE安裝。有關ZIP檔案，已經存放在本Github的<a href="https://github.com/SCOUT-METEAM/1st_STEM_Course/blob/main/libraries/scout.zip">libraries</a>內。<p>

1. 按Sketch\Include Library\Add .ZIP Library <p>
  <img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/Class01.png"><p>
2. 選擇上述已下載的"scout.zip"檔案。<p>

3. 如成功安裝，可以透過以下檢查及打開Example。<p>

3A. 在WINDOW內的Documents\Arduino\libraries會看到新增的scout目錄。<p>
    <img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/Class02.png"><p>
3B. 在Arduino IDE，選擇File\Examples\scout，便可以打開以下Example Coding 。<p> 
    <img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/Class03.png"><p>
          <img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/Class04.png"><p>
<h1>Example Coding</h1><p>
<pre><code>
#include "Scout.h" //引入Library檔案

ScoutProg met; //建立物件, 命名物件名稱為met並繼承ScoutProg CLASS。(物件名稱met是自定)

void setup() 
{
met.meteam(); //引用ScoutProg CLASS的FUNCTION
}

void loop() 
{

}
</code>
</pre>

使用三部曲:
1) 引入Library檔案
2) 建立物件
3) 使用有關Class內function

<h1>Library檔案.h及.cpp</h1><p>
Library檔案有兩種，一種是.h另一種是.cpp。.h可以看成是一個目錄(主要是存放Class)，而.cpp可以是看成內容(主要是存放Outside Class Functions)。<p>

由於本例子簡單，只有一個.h檔案。通常，當我們下載Library後，如果想直接看Class內容，會直接先看.h檔案。而本例子中，Library檔案名稱是Scout.h。<p>

  現在，我們用<a href="https://www.sublimetext.com/">SUBLIME TEXT</a>打開Scout.h。從下圖中，可以看到有一個Class，名稱是ScoutProg。在建立物件時，我們會用到。而這個<B>ScoutProg </B>Class內可以看到有一個function，名稱是<B>meteam()</B>。這個function功能是例印出文字。因此，當我們從ScoutProg Class建立物件後(上面Example Coding，這句ScoutProg met;)，便可以繼承此function。只要用物件名稱加.meteam()便可以。<B>注意，在使用Class 繼承時，第一樣要做的，是引入Library檔案，即上述Example Coding第一行。</B><p>
 <img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/Class05.png"><p>
<h1>其它繼承例子</h1><p>
以下是其它繼承例子，我們會以Adafruit DHT11及Adafruit OLED 的Library作例子。這兩個Libraries，我們會在今次的課堂使用。<p>Adafruit是世界其中一間大型open-source電子零件公司。而他們的Library好多時都適在Arduino或其它電子生產商所生產的同型號零件使用。<p>
<B>1. Adafruit DHT11溫度濕度感應器Library。</B><p>
下圖中，左邊是Adafruit DHT11 Library的Example Coding，右邊是該Library檔案<B>.h(名稱是DHT.h)</B>。從圖中，可看到，有一句<B>DHT dht(DHTPIN, DHTTYPE);</B>。而我們可知，這個Class叫DHT。而繼承後的物件名稱是dht。但是，這個Class在時，需要在繼承時需要在物件後加括號，這與我們上述例子不同。這是正常的。因為Adafruit在創造這個Class時，設定要加入其他資料。所以，我們需要了解!!
<p>
  <i>從右圖的Library檔案，可知道，在第65行這句<B>DHT(uint8_t pin, uint8_t type, uint8_t count=0)</B>是設定在繼承時要加入其他資料。</i>
<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/Class06.png"><p>
在Adafruit DHT11 Library的Example Coding，物件括號內要加入的資料，在程式開首已用define定義了。所以在物件括號內可以用define引入。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/Class07.png"><p>
下圖中，是另一個Adafruit DHT11的Library檔案<B>.cpp</B>(名稱是DHT.cpp)，主要是儲存function內容的檔案，我們叫這些function是Outside Function。從中，可見到華氏及攝氏轉換公式。<p>
 <img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/Class08.png"><p>
  <B>2. Adafruit SSD1306 OLED顯示器Library。</B><p>
下圖中，左邊是Adafruit SSD1306 OLED顯示器Library的Example Coding，右邊是Library檔案<B>.h(名稱是)</B>。<p>
  
