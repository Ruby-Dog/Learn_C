/******************************************************************************

2個變數(int) 6個result 做的一個6則運算 (not and or xor << >>)
a,b屬於 Z
r1,r2,r3,r4,r5,r6屬於 Z
*******************************************************************************/

#include <stdio.h>

int main()
{   int a;
    int b;
    int r1,r2,r3,r4,r5,r6;
    printf("請輸入a :");
    scanf("%d",&a);
    printf("請輸入b :");
    scanf("%d",&b);
    printf("a=%d  b=%d\n",a,b);
    r1=!a;
    r2=b^a; 
    r3=b&a;
	r4=b|a>>1;
	r5=b<<199;
	r6=a|b&a>>a^a^a;
    printf("!a=%d\n",r1);
    printf("b^a=%d\n",r2);
    printf("b&a=%d\n",r3);
	printf("b|a>>1=%d\n",r4);
	printf("b<<2=%d\n",r5);
	printf("!a|b&a>>a^a^a=%d,\n",r6);
	
    return 0;
}
