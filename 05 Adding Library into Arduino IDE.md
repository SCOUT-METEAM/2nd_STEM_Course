<h1>1. 透過Arduino IDE下載</h1><p>
好處:可避免在下載時，違漏了其它關連library檔案。<p>
壞處:不可以先看library內檔案才下載。<p>

i)在Arduino IDE軟件內，我們可以尋找到一些晶片的library。只要選擇Sketch\Include Library\Manage Libraries…<p>
  <img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AL01.png">
ii)當選擇後，會出現以下圖面，這是Arduino IDE library搜尋器。<p>
iii)在搜尋器輸入欄內輸入所需晶片名稱，按下”輸入鍵”後，便會例出相關資料。選擇Arduino版本、最新version並按下Install鍵。Arduino IDE便會自動下載及安裝。安裝後會顯示Installed及版本。<p>
iv) 檢查library是否正確安裝。選擇Sketch\Include Library。剛才所選擇的library已安裝了。<p>
v)同時間，在File\Examples內，會提供相關例子程式。我們可参考有關編程，十分重要啊!<p>

<h1>2. 從GITHUB直接下載</h1><p>
好處:可以先看library內檔案才下載。<p>
壞處:在下載時，可能違漏了其它關連library檔案下載。<p>

i)按下綠色”Clone or Downlaod”，下載此library 。<p>
ii)選擇下載ZIP檔案。<p>
iii)下載後，有以下2個方法:<p>
A)可以在Arduino IDE，按下Sketch\Include Library\Add .ZIP Library 並選擇在GITHUB下載的ZIP檔案。<p>
B)打開ZIP檔案， COPY ZIP檔案內的檔案入Arduino Library 目錄內(注意，不是下載的ZIP檔案)。即在早前安裝Arduino IDE時，提及的安裝路徑。一般是C:\Program Files (x86)\Arduino\libraries。重新啟動Arduino IDE軟件。與之前A)章節一樣，檢查library及Examples。<p>
