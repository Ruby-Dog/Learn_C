/*ch1 outline.c */
//-----head---
#include <stdio.h>  //C head 把模組叫進來 
					// std -> standrd  
					// io  -> input output
										
#include <stdlib.h>	// lib -> libery 				

#define MAX 10 //超級變數 所有都可以用 

//-----head---

// protocal  //宣告簡單 不用放變數 只要宣告 1.函數型態 2.函數名稱 3.參數資料型態 
int square(int);     //函數原型(prototype)的宣告  

//-------------
void main(void){ 

	int i;
	int total;
	int square_total = 0;
	total = 0;
	for(i=1;i<MAX;i++){
		total +=i ;
		printf(" i = %d , total = %d \n",i,total);
	}
	printf("The sum of 1+2+3+...+10 is %d.\n",total);
	square_total = square(total);
	printf("Square of %d is %d .\n",total,square_total); 
	system("PAUSE"); //可暫停 
	return 0; 	 //可暫停 
}
int square(int value){       //函數
	return value*value;
}


