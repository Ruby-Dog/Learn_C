# Learn_C
#My recording of learing C leaguage since 20200918  

```
Teacher : c語言變數名稱長度有限制!

變數名稱的長度基本上沒有限制，實際上則會因為各個編譯器的實做限制而產生限制。
各個編譯器對於變數名稱的最大長度容忍度不同，早年因為技術上的關係，通常變數名稱不能超過6個字元， 
因此才會在一些古老的程式上看見很多過於簡短到難以明白做什麼用的名稱如KNFX、CPXCTN、QUAN等。 
現在的編譯器的上限通常都在1024以上，幾乎等於無上限， 因此如果讓變數的名字長一點而可以增加易讀性的話，就請這麼做吧！

```

编译C语言程序时报错：“'for' loop initial declarations are only allowed in C99 mode”
https://blog.csdn.net/qq_37118873/article/details/78188323
```
解决方法：有两种，个人推荐第二种

1）将for循环里的int 定义到for循环外

2）

Tools ->

Compiler Options -> 

General -> 

将 Add the following commands when calling the compiler;打√ ->

在下面填写上        -std=c99            -> OK 
```
```
1Byte = 8 bits 

1 bit 有2個值 ( 0 和 1 )
1 Byte 有 256 個值 ( 2^8 = 256 ) 


1 bit = ( 0 , 1 )
1 Byte = 8 Bits
1 word = 2bytes ( or 4 bytes) 


1 Kilobyte (KB)      = 1024 Bytes   = 2^10 B ~ 10^3     （千）
1 Megabyte (MB)      = 1024 KB      = 2^20 B ~ 10^6     （百萬）
1 Gigabyte (GB)      = 1024 MB      = 2^30 B ~ 10^9     （十億）
1 Terabyte (TB)      = 1024 GB      = 2^40 B ~ 10^12    （兆）
1 Petabyte (PB)      = 1024 TB      = 2^50 B ~ 10^15    （千兆）
1 Exabyte (EB)       = 1024 PB      = 2^60 B ~ 10^18    （百京）
1 Zettabyte (ZB)     = 1024 EB      = 2^70 B ~ 10^21    （十垓ㄍㄞ）
1 Yottabyte (YB)     = 1024 ZB      = 2^80 B ~ 10^24    （秭ㄗˇ）

#背 K M G - T P E  - Z Y   (國民黨GG - 台北 - Z歪)

```
```
8進制   以 0 開頭          ---->  012     075
16進制  以 0x 或 0X 開頭   ---->  0x45AD  0X1F7B
```

指標教學:
https://kopu.chat/2017/05/15/c%E8%AA%9E%E8%A8%80-%E8%B6%85%E5%A5%BD%E6%87%82%E7%9A%84%E6%8C%87%E6%A8%99%EF%BC%8C%E5%88%9D%E5%AD%B8%E8%80%85%E8%AB%8B%E9%80%B2%EF%BD%9E/
```
指標 (Pointer)： 某變數的位址
--------------------------------------------
變數的位址 為 指向該變數的指標
--------------------------------------------
「&」是「取址」
「*&b」是　從這個地址中取出變數b的值
「*&b」和「b 」的意義是等價的
--------------------------------------------
指標變數（Pointer variable）：來存放指標的變數
--------------------------------------------
pointer 中存的地址是變數 b 的值，因此我們又把 pointer 稱為「變數 b 的指標變數」。
--------------------------------------------
```
C語言讓電腦跑亂數 : http://it-easy.tw/crand/  

pointer
https://www.itread01.com/content/1546612572.html

