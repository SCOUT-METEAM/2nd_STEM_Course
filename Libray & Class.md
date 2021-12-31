<h1>Library Installation</h1><p>
我們編寫了一個簡單的Library檔案，請下載 "scout.zip"，並利用Arduino IDE安裝。有關ZIP檔案，已經存放在本Github的libraries內。
  
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
