<h1>Variables Data Types</h1><p>
Arduino的變數型態(DATA TYPE)有不同種類，以下供大家參考。Arduino特意修改了一些變數型態，與一般程式所使用的變數型態不同。目的是適合他們不同種類的控制板使用。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/variable01b.png"><p>
<h1>變數(Variables)</h1><p>
變數，在程式編寫時會經常用到。可以想像，變數是一個紙箱，用來裝東西。但是這個紙箱有不同大小。<p>在程式編寫實際例子，變數可用來裝數值、文字等。而變數有不同大小。但是，該大小是由程式語言預設，不能更改。所以，要認識不同變數型態(Data Types)及運用。<p>
當程式開始運行時，如有變數，電腦的記憶體會預留空間給予該變數。以下是兩類變數型態例子，byte及int(當然不止兩類!)。<p>
<img src="https://www.meteam.org/1st_STEM2022/GithubWebpage/T02LED02b.png"><p><p>
從上圖中，可見byte所佔的空間比int小。的確，在Arduino UNO3，byte所佔空間是8 bit(可裝0-255數值範圍)，而int所佔空間是16 bit(可裝-32,768至32767數值範圍)。<B>byte及int階是屬於整數，不能裝小數。如要裝小數，就要用float。而byte則只可以裝負數。如果給予byte的變數一個負數，如-3，你看看輸出是甚麼數值??</B><p>

<B>變數宣告:</B><p>
<B>變數資料型態   變數名稱(可以自己改)</B><p>
<B>***變數資料型態是關鍵字，要根據程式語言設定輸入。大小寫跟足，不能亂改。</B> <p>
 例子: byte LED = 3; <p>  
