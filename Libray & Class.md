<h1>Library & Class</h1><p>
Library & Class是寫程式一個重要概念。<p>
  
<h1>Library Installation</h1><p>
我們編寫了一個簡單的Library檔案，請下載 "scout.zip"，並利用Arduino IDE安裝。有關ZIP檔案，已經存放在本Github的libraries內。<p>

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

由於本例子簡單，只有.h檔案。通常，當我們下載Library後，如果想直接看Class內容，會直接先看.h檔案。<p>

從下圖，可知道Class名稱是ScoutProg。在建立物件時,我們會用到。而這個ScoutProg Class內可以看到有一個function。這個function是例印出文字。因此，當我們從ScoutProg Class建立物件後，便可以繼承此function。只要用物件名稱加.meteam()便可以。<p>

  
