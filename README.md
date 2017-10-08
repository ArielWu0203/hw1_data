# hw1_data
# Data_hw1
## hw1_1
* 程式說明
  * 輸入(n r)，輸出(n(n-1)...(n-r+1))/r!。
  * 使用遞迴，遞迴的終止條件為r==1時。
* 程式設計
  * 我希望可以從小乘(除)到大，例如:(n r)=(6 3)時，可以先4/1`(n-2)/(r-2)`再乘以5/2`(n-1)/(r-1)`最後再乘以6/3`n/r`。
  * 若還未到終止條件，則return func(n-1,r-1)n/r，每次呼叫的function中的參數n和r皆須減一，直到達終止條件。
  * 達終止條件時，回傳n/r。
* 程式架構
  * if (達終止條件) 回傳數值。
  * else call function。
## hw1_2
* 程式說明
  * 輸入n個Disk，輸出將n個Disk從A移動到C柱的過程，並輸出總共移動的步數。
  * 使用遞迴，終止條件為n==1時。
* 程式設計
  * **概念** 共分三個動作，第一個動作先將前n-1個Disk由A移到B柱n號Disk移到C柱，而而第二個動作將n號Disk由A移到C柱，最後第三個動作將前n-1個盤子由B移到C柱。
  * **附註** 第一和第三個動作代表已忽略n號Disk，因為n號盤最大，所以其他Disk皆可以任意移動在這三根柱子上。
  * Function所設的參數為n`需移動的Disk個數`、a`起點`、b`經過`、c`終點柱`。
  * 若未到達終止條件時，做第一個動作`call function(n-1,a,c,b)`，第二個動作移動n號Disk'`從a移動到c`，最後第三個動作`call function(n-1,b,a,c)`。
  * 達終止條件時，1號Disk從a移動到c，並return`這時最後一個Function已完成`，並回去繼續執行上一個呼叫的Function。
  * 每做一次移動，都要計算步數。
* 程式架構
  * if (達終止條件) 移動且return。
  * else 做三個動作。 `call function(n-1,a,c,b)``n號Disk從a移動到c``call function(n-1,b,a,c)`
  * 移動時，step+1
