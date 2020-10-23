#include <stdio.h> 
#include <stdlib.h>
#define PI 3.14

int main(){
	
	int r=0;
	double area1=0,area2=0;
	double total=0 , diff=0; 
	
	printf("計算圓面積 \n\n");
	printf("Input radius of first circle : ");
	scanf("%d",&r);
	
	
	r++;
	area1 = PI * r * r;
	printf("第一個圓的面積 : %.2f\n\n",area1); 
	
	
	printf("Input radius of two circle : ");
	scanf("%d",&r);
	r--;
	
	
	area2 = PI * r * r;
	printf("第二個圓的面積 : %.2f\n\n",area1);
	
	total = area1 + area2;
	diff = area1 -area2; 
	
	
	printf("面積總和 : %.2f\n",total);
	printf("Difference is %.2f\n",diff);
	
	
	system("PAUSE");
	return 0;

} 
