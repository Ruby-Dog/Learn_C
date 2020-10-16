
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
    
    
    return 0;
}
