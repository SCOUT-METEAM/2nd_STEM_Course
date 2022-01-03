<h1>Library & Class</h1><p>
Library & Class是寫程式一個重要概念。當我們加裝一個感應器，如連接DHT11溫度濕度到Arduino UNO3上，我們會預期可以即時使用。但是，電子零件需要軟件驅動才可以使用。那麼我們又怎樣可以編寫有關軟件?<p>
如要編寫軟件去啟動一個電子零件，可以是一件十分複雜的事。如上述提及的DHT11溫度濕度感應器，至少我們需要知道有關結構及資料傳送循環並編寫有關程式。無論對於初學者或經驗者，這些會比較困難及費時。幸好，通常廠商會公開有關程式供其使用者使用。GITHUB就是一個公開平台發佈有關程式。而且，又會有其他程式專才修改及再發佈。而有關程式，通常利用Class來包裝。只要我們繼承有關Class，便可以直接使用。因此，我們會通常會視Class是藍圖。有關程式，在Arduino，會以<B>".h"及".cpp"</B>儲存。
<p> 
<h1>Library Installation</h1><p>
我們編寫了一個簡單的Library檔案，請下載 "scout.zip"，並利用Arduino IDE安裝。有關ZIP檔案，已經存放在本Github的<a href="https://github.com/SCOUT-METEAM/1st_STEM_Course/blob/main/libraries/scout.zip">libraries</a>內。<p>

1. 按Sketch\Include Library\Add .ZIP Library <p>
  
2. 選擇上述已下載的"scout.zip"檔案。<p>

3. 如成功安裝，可以透過以下檢查及打開Example。<p>

3A. 在WINDOW內的Documents\Arduino\libraries會看到新增的scout目錄。<p>
  
3B. 在Arduino IDE，選擇File\Examples\scout，便可以打開以下Example Coding 。<p> 

<h1>Example Coding</h1><p>
<pre><code>
#include "Scout.h" //引入Library檔案

ScoutProg met; //建立物件, 命名物件名稱為met並繼承ScoutProg CLASS。

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

現在，我們用SUBLIMETEXT打開Scout.h。從下圖中，可以看到有一個Class可知道Class。名稱是ScoutProg。在建立物件時,我們會用到。而這個ScoutProg Class內可以看到有一個function。這個function功能是例印出文字。因此，當我們從ScoutProg Class建立物件後，便可以繼承此function。只要用物件名稱加.meteam()便可以。<p>

  
