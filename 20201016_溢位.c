
#include <stdio.h>

int main()
{
    /*short int的範圍為 -32768~32767   (2Bytes 有2^16個數  範圍為 -2^15 ~ 2^15+1 ) */
    short int score = 32765;
    printf("1. %hd.\n",score);
    printf("2. %hd.\n",score+1);
    printf("3. %hd.\n",score+2);
    printf("4. %hd.\n",score+3);
    printf("5. %hd.\n",score+4);
    printf("6. %hd.\n",score+5);
    
    
    printf("-------------------------------------\n");
    printf("使用forloop:\n");
    
    int i;
    for(i =1 ; i<=6 ;i++){
		printf("%d. %hd.\n",i,score+i);    	
	}
    
    return 0;
        
    /*h：表示bai短整数du(short int)。
    %d：接受整数值并将它表示为有zhi符号的十进d制整数
    %hd:实际上就是输出一个内短整数。
    /*
    
    
    return 0;
}
