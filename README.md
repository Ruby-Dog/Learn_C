# Learn_C
#My recording of learing C leaguage since 20200918  

```
Teacher : c語言變數名稱長度有限制!

變數名稱的長度基本上沒有限制，實際上則會因為各個編譯器的實做限制而產生限制。
各個編譯器對於變數名稱的最大長度容忍度不同，早年因為技術上的關係，通常變數名稱不能超過6個字元， 
因此才會在一些古老的程式上看見很多過於簡短到難以明白做什麼用的名稱如KNFX、CPXCTN、QUAN等。 
現在的編譯器的上限通常都在1024以上，幾乎等於無上限， 因此如果讓變數的名字長一點而可以增加易讀性的話，就請這麼做吧！

```
```
编译C语言程序时报错：“'for' loop initial declarations are only allowed in C99 mode”
https://blog.csdn.net/qq_37118873/article/details/78188323

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

1Byte = 8 Bits

1 Kilobyte (KB)      = 1024 Bytes   = 2^10 B ~ 10^3     （千）
1 Megabyte (MB)      = 1024 KB      = 2^20 B ~ 10^6     （百萬）
1 Gigabyte (GB)      = 1024 MB      = 2^30 B ~ 10^9     （十億）
1 Terabyte (TB)      = 1024 GB      = 2^40 B ~ 10^12    （兆）
1 Petabyte (PB)      = 1024 TB      = 2^50 B ~ 10^15    （千兆）
1 Exabyte (EB)       = 1024 PB      = 2^60 B ~ 10^18    （百京）
1 Zettabyte (ZB)     = 1024 EB      = 2^70 B ~ 10^21    （十垓ㄍㄞ）
1 Yottabyte (YB)     = 1024 ZB      = 2^80 B ~ 10^24    （秭ㄗˇ）

```
