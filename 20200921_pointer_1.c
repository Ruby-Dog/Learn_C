#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a=5 , b=10;
    int *ptr1 , *ptr2;
    ptr1=&a; //將ptr1 設為a的位址 （指標ptr1指向變數a)
    ptr2=&b; //將ptr2 設為b的位址 （指標ptr2指向變數b)
    printf("a = %d , b = %d , ptr1 = %p , *ptr1 = %d , ptr2 = %p , *ptr2 = %d \n",a,b,ptr1,*ptr1,ptr2,*ptr2);
    
    *ptr1 = 7 ;   //(a也變7)
    printf("a = %d , b = %d , ptr1 = %p , *ptr1 = %d , ptr2 = %p , *ptr2 = %d \n",a,b,ptr1,*ptr1,ptr2,*ptr2);
    
    *ptr2 = 32 ;   //(b也變32)
    printf("a = %d , b = %d , ptr1 = %p , *ptr1 = %d , ptr2 = %p , *ptr2 = %d \n",a,b,ptr1,*ptr1,ptr2,*ptr2);
    
    a = 17 ; //(*ptr1也變17)
    printf("a = %d , b = %d , ptr1 = %p , *ptr1 = %d , ptr2 = %p , *ptr2 = %d \n",a,b,ptr1,*ptr1,ptr2,*ptr2);
    
    ptr1 = ptr2 ; //(ptr1的值變為ptr2 而*ptr1也變為*ptr2
    printf("a = %d , b = %d , ptr1 = %p , *ptr1 = %d , ptr2 = %p , *ptr2 = %d \n",a,b,ptr1,*ptr1,ptr2,*ptr2);
    
    *ptr1 = 9;
    printf("a = %d , b = %d , ptr1 = %p , *ptr1 = %d , ptr2 = %p , *ptr2 = %d \n",a,b,ptr1,*ptr1,ptr2,*ptr2);
    
    ptr1 = &a;
    printf("a = %d , b = %d , ptr1 = %p , *ptr1 = %d , ptr2 = %p , *ptr2 = %d \n",a,b,ptr1,*ptr1,ptr2,*ptr2);
    
    a = 64 ;
    printf("a = %d , b = %d , ptr1 = %p , *ptr1 = %d , ptr2 = %p , *ptr2 = %d \n",a,b,ptr1,*ptr1,ptr2,*ptr2);

    *ptr2 = *ptr1 + 5;
    printf("a = %d , b = %d , ptr1 = %p , *ptr1 = %d , ptr2 = %p , *ptr2 = %d \n",a,b,ptr1,*ptr1,ptr2,*ptr2);

    ptr2 = &a;
    printf("a = %d , b = %d , ptr1 = %p , *ptr1 = %d , ptr2 = %p , *ptr2 = %d \n",a,b,ptr1,*ptr1,ptr2,*ptr2);
    
    return 0;
}
