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
    int addSum,mulSum;
    
    for(size_t i=0;i<3;i++){
        s[i]=getNum();
    }
    
    addSum = addition(s);
    mulSum = multiplied(s);

    return 0;
}

int addition(int s[]){
    int sum=0;
    for(size_t i=0;i<3;i++){
        sum+=s[i];
    }
    printf("總成績為:%d\n",sum);
}

int multiplied(int s[]){
    int sum=1;    //如果等於0 不管怎麼成都會是0
    for(size_t i=0;i<3;i++){
        sum*=s[i];
    }
    printf("總成績相乘為:%d\n",sum);
    
}

int getNum(void){
    printf("輸入成績:");
    int num=0;
    scanf("%d",&num);
    return num;
}
