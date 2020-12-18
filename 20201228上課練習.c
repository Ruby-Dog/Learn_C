/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int getNum(void);
int addition(int[]);


int main()
{
    int s[3]={0,0,0};
    int sum;
    
    for(size_t i=0;i<3;i++){
        s[i]=getNum();
    }
    
    sum = addition(s);

    return 0;
}

int addition(int s[]){
    int sum;
    for(size_t i=0;i<3;i++){
        sum+=s[i];
    }
    printf("總成績為:%d",sum);
}

int getNum(void){
    printf("輸入成績:");
    int num=0;
    scanf("%d",&num);
    return num;
}
