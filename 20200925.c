
//The sum of 1^+2^+3^....10^

#include<stdio.h>
#include<stdlib.h>

int sumOfSquare(int ,int );
void main(void){
	int myAnswer = sumOfSquare(1,10);
	printf("The sum of 1^+2^+3^....10^ is = %d\n",myAnswer);
	return ;
	
}
int sumOfSquare(int firstNum,int lastNum){
	int sum=0 ;
	
	int i=0;
	for(i=firstNum;i<=lastNum;i++){
		int i_square = i*i;
		sum+=i_square;	
	}
	return sum;
}
