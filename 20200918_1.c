/*ch1 outline.c */
//-----head---
#include <stdio.h>  //C head ��Ҳեs�i�� 
					// std -> standrd  
					// io  -> input output
										
#include <stdlib.h>	// lib -> libery 				

#define MAX 10 //�W���ܼ� �Ҧ����i�H�� 
//-----head---


int square(int); 
int main(void){ 

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
	system("PAUSE");
	return 0;
}
int square(int value){
	return value*value;
}


