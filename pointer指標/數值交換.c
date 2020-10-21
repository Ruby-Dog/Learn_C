#include <stdio.h>  

void swap(int* p1 ,int* p2);
int main(void){
    
    int a=45;
    int b=6;
    printf("交換前  a = %d   b= %d\n",a,b);
    swap(&a,&b);
    printf("交換後  a = %d   b= %d\n",a,b);
    
    return 0;
}

void swap(int* p1 ,int* p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    
    printf("執行swap()時  a = %d   b= %d\n",*p1,*p2);
    
     
    
}
