/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int main()
{
    
    
    struct data{
        char name[10];
        int math;
    }student[MAX];
    
    for (size_t i=0;i<MAX;i++ ){
        fflush(stdin);
        printf("請輸入學生姓名:");
        gets(student[i].name);
       
        printf("請輸入數學成績:");
        scanf("%d",&student[i].math);
        setbuf(stdin,NULL);
        //getchar();
    }
    for (size_t i=0 ; i<MAX ; i++ ){
    printf("姓名 :%s   數學成績:%d \n",student[i].name,student[i].math);
    }
    /*fflush(stdin)是一个计算机专业术语，
    功能是清空输入缓冲区，通常是为了确保不影响后面的数据读取
    （例如在读完一个字符串后紧接着又要读取一个字符，
    此时应该先执行fflush(stdin);。
    
    fflush(stdin) 非標準函示庫 , 不可攜,只適用於window 
    
    可使用以下來代替:
    getchar();
        ->getchar()函數從鍵盤讀入字符時，
        輸入的字符帶回顯，
        並且必須等到輸入換行（按Enter鍵）才能讀取一個字符。
        (從I/O字符流中讀取一個字符，必須輸入換行才能讀入字符。


    setbuf(stdin,NULL);    
        ->(mac linux window 可使用) ->關閉緩衝區
    
    */
    
    
    return 0;
}
