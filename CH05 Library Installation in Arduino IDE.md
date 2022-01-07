<h1>Library Installation in Arduino IDE</h1><p>
<h1>1. 透過Arduino IDE下載</h1><p>
好處: 可避免在下載時，違漏了其它關連library檔案。<p>
壞處: 不可以先看library檔案內容才下載。<p>

i)在Arduino IDE軟件內，我們可以尋找到一些晶片的library。只要選擇Tools\Manage Libraries…<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AL01.png"><p>
ii)當選擇後，會出現以下圖面，這是Arduino IDE library搜尋器。這次例子，會以下載DHT11 Library為例。因此，在搜尋器內輸入DHT11，按下”輸入鍵”後，便會例出相關資料。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AL02.png"><p>
iii)選擇想要的開發者，我們會選擇由Adafruit開發及他的最新version，並按下Install鍵安裝。之後，Arduino IDE便會自動下載及安裝。<p>
  (Adafruit Industries 是一家位於紐約市的開源硬件公司，其產品涵蓋Arduino和Raspberry Pi。所以，他的Library多數過適合Arduino使用)。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AL03.png"><p>
iv)在安裝時，如發現有其他關聯Library會如下圖出現提示。只要按<B>"Install All"</B>便可以。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AL04.png"><p>
v)安裝後會顯示Installed及版本。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AL05.png"><p>
vi) 檢查library是否正確安裝。我們可以在"文件\Arduino\libraries"內看到新增檔案。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AL06.png"><p>
又或在File\Examples內看到。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AL07.png"><p>
vii)同時間，在File\Examples內，會提供相關例子程式。我們可参考有關編程，十分重要啊!<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AL07.png"><p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AL08.png"><p>
<h1>2. 從GITHUB直接下載</h1><p>
好處:可以先看library內檔案才下載。<p>
壞處:在下載時，可能違漏了其它關連library檔案下載。<p>

i)先到GITHUB搜尋有關Library，從下圖中，可以看到adafruit/DHT-sensor-library是第一個出現。我們CLICK入有關連結。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AL09.png"><p>
ii)按下綠色”Code”，再按下"Download ZIP"此library 。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AL10.png"><p>
iii)下載後，有以下2個方法新增有關ZIP檔案。<p>
A)可以在Arduino IDE，按下Sketch\Include Library\Add .ZIP Library 並選擇在GITHUB下載的ZIP檔案。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AL12.png"><p>
檢查library是否正確安裝。我們可以在"文件\Arduino\libraries"內看到新增檔案。
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AL06.png"><p>
又或在File\Examples內看到。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/AL07.png"><p>
  
B)第2個方法是打開下載ZIP檔案， 複製ZIP檔案內的檔案入Arduino Library 目錄內(注意，不是下載的ZIP檔案)。即在早前安裝Arduino IDE時，提及的安裝路徑。一般是C:\Program Files (x86)\Arduino\libraries。重新啟動Arduino IDE軟件。與之前A)章節一樣，檢查library及Examples。<p>
