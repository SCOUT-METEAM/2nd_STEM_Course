
<h1>CH01 Arduino IDE Installation</h1>
<br>Arduino IDE 是一個程式編寫軟件，由ARDUINO 官方提供。我們需要透過Arduino IDE編寫程式，上傳到Arduino硬件，使到Arduino控制板能夠運作。 <br>
<h2>A) Arduino IDE 下載</h2>
<br>Arduino IDE可以到以下網址下載: <a href="https://www.arduino.cc/en/Main/Software" target="_blank">https://www.arduino.cc/en/Main/Software</a>
<br><br>
1. 如果是使用<B>WINDOW OS</B>，可以下載並安裝<B>"Windows Win 7 and newer"</B>版本。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AIDE01.png" alt="right">
<br>
2. 選了<B>Windows Win 7 and newer</B>後，按下<B>JUST DOWNLOAD</B>便可下載並安裝。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AIDE02.png" alt="right">
<br>
<h2>B) Arduino IDE 安裝</h2>
1. 雙按已下載<B>arduino-1.8.19-windows.exe</B>檔案便會出現以下畫面。再按下<B>”I Agree”</B>。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AIDE03.png" alt="right"><br>
2. 全選所有安裝及按下<B>”NEXT”</B> 。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AIDE04.png" alt="right"><br>
3. 留意安裝路徑及記下，因為日後需要尋找有關路徑。按下<B>”INSTALL”。</B><p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AIDE05.png" alt="right"><br>
4. 安裝完成後，按下<B>”CLOSE”。</B>。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AIDE06.png" alt="right"><br>
5. 雙按桌面捷徑，啟動Arduino IDE。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AIDE07.png" alt="right"><br>
6. 當安裝了後，打開程式，便如下圖。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AIDE08.png" alt="right"><br>
<br>
  <B>Void Setup() { } / Void loop() { }</B><p>  
  Void Setup() { } 及Void loop() { } 是Arduino IDE內嵌functions。當Arduino UNO3通電後，Void Setup() { }內程式會被執行一次。而Void loop() { }內程式則會不斷地重覆執行。<p> 
  { }是大括號，英文叫block。我們想寫的程式放在這個block內。
<p>  
  <B>Comments</B><br>
  //是代表comments，//之後的文字是不會被Arduino IDE編釋，會自動跳過。因此，Comments可以用作記錄有關程式註解。<br>
  如有多行comments，可以使用/* */。我們會先用/*作開首，*/作結。<br>
  /*<br>
  ABCD<br>
  EFGH<br>
  */
<p>
<B>編譯器 (Compiler)</B><p>
當以上CODING編寫好後，我們表下Arduino IDE上的上傳按鈕<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AIDE10.png">，便可以自動上傳有關程式到Arduino UNO3。其實Arduino IDE內嵌了一個編譯器 (Compiler)，當上傳時，這個編譯器會自動將我們的程式碼改成機械碼1010001....... 。這些機械碼就是Arduino UNO3可讀取及運作的機械碼。
<p> 
<B>程式語言 (Program Language)</B><p>
Arduino IDE內所編寫的程式語言是建機於C、C++。Arduino將它簡化，使初學者容易上手。
<p>   
<B>Ref: </B><br>
Install the Arduino Software (IDE) on Windows PCs<br>
https://www.arduino.cc/en/Guide/Windows#proceed-with-board-specific-instructions
