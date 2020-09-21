#include <stdio.h>
#include <stdlib.h>
int main(void){
  //指標宣告方式
  
  //一個指標換行指向
  int a=5;   
  int b=10;
  int *ptr1;
  int* ptr2;
  ptr1 = &a;
  ptr2 = &b;
  printf("%d\n",*ptr1);
  printf("%d\n",*ptr2);
  
  //一個指標馬上指向
  int *x=&a,*y=&b;
  printf("%d\n",*x);
  printf("%d\n",*y);
  
  //兩個指標一起宣告
  int* c,d;   //會被編譯器解讀成 int *c , d
  
  c=&a;
  //d=&b;
  d=999;
  
  printf("%d\n",*c);
  //printf("%d\n",*d);
  printf("%d\n",d);
  
  //(由此可知,要一次宣告兩個指標時,不要用此種方式)
  
  
  
 
 
    return 0;
}
