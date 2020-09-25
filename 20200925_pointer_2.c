/* 傳遞指標的運用 */

#include <stdio.h>
#include <stdlib.h>

void add10(int *); //the prototype declaration of the funtion add10()  

int main(int argc, char *argv[]) {
	int a = 5 ;
	printf("before calling add10() , a = %d\n",a); 
	add10(&a);	
	printf("after calling add10(), a = %d\n",a);
	 
	return 0;
}

void add10(int *ptr1){
	*ptr1 = *ptr1 + 10;
}
