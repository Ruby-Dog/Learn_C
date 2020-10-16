#include <stdio.h>

int main()
{
    int a=5;
    
    printf("變數a的值 a = %d\n",a);
    
    
    //「&」為「位址運算子」 用來取得變數的位址 
    
    printf("變數a的位址 &a = %p\n",&a);   
    //「%p」This is used to print the pointer type data.
    
    //「 *」為「依址取值運算子」 用來取得指標所指向的變數內容 */
     
    printf("變數a的值 *&a = %d\n",*&a);
    
    //「*&b」和「b 」的意義是等價的。
    
    printf("--------------------------------------------------\n");
    //------------------------------------------------------------
    
    /*指標 (Pointer) 就是某變數的位址。
    而這邊的指標變數 (Pointer Variable)，則是用來存放指標的變數*/
    
    //宣告指標變數的方法如下:
    int* pointer_TEST;     // int *pointer_TEST也可以
    
    /*pointer 表示這個變數的名稱，
    而 * 表示 pointer 這個變數是個指標。*/
    
    //------------------------------------------------------------
    int b; 
    //跟記憶體要一塊區域稱為b,這塊區域專門放int型變數值
 
    b = 2; 
    //把2這個值給變數b
 
    int* pointer; 
    //跟記憶體要一塊區域稱為pointer,這塊區域專門放指向int型變數的指標（地址）
 
    pointer = &b; 
    //把變數b的地址值給pointer，注意不能寫成 pointer = b; 因為 pointer 是專門存放地址的變數。
    
    // 如此一來，我們就稱「指標變數 pointer 指向了變數 b」 !!
     
    //------------------------------------------------------------
    
    /**/
    
    int c=60;
    int* pointer2 = &c;
    
    //可以用「*pointer」來拿到變數c。
    printf("c = %d \n",*pointer2);
    
    //!!重要!!
    /*這裡的「*」，和宣告指標變數的 int* pointer 的意義不太一樣。
    反而是和「&」相對應——「&」代表「取出地址」、
                         「*」代表「取出內容」。*/
                         
    /*所謂的「*pointer 取出的內容」指的到底是變數 b、還是變數 b 的值 2？
      這兩個是不同的東西喔！  
      變數 b 是這塊區域，2 是值。
      
      答案是：*pointer 代表的就是變數 b。所以我們可以把 *pointer 當作變數 b 來使用。
      
    */                     
    
    printf("--------------------------------------------------\n");
    int d=3;
    int* pointer3 = &d;
    
    printf("變數d值 = %d \n",d);
    printf("變數d的位址 = %p \n",&d);
    printf("指標變數pointer3的值 = %p \n",pointer3);
    
    printf("\n");
    
    *pointer3=9999;
    printf("指標變數pointer3 = %d \n",*pointer3);
    printf("變數d的值 = %d \n",d);
    printf("指標變數pointer3位址 = %p \n",&pointer3);
    /*存放 pointer 這個變數的地址，和變數 b 的地址不一樣，
    所以利用「&pointer」後，可發現地址「0x7fff551b49c0」和變數 b 的地址果然不一樣。*/
    
    printf("--------------------------------------------------\n");
    
    
    //交換值小練習
    
    int x,y,temp;
    int *p1,*p2;
    printf("請輸入x的值:");
    scanf("%d",&x);   
    /*scanf("格式控制字符串", 地址表列);
    把輸入的東西掃描後,存入該地址裡*/
    
    printf("請輸入y的值:");
    scanf("%d",&y);
    
    printf("交換前,x = %d  y = %d \n",x,y);
    p1 = &x;
    p2 = &y;
    
    if(*p1<*p2){
        temp = *p1;
        *p1=*p2;
        *p2=temp;
    }
    
    printf("交換後,x = %d  y = %d \n",x,y);
    
    printf("--------------------------------------------------\n");
    return 0;
    
}
