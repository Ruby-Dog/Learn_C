/******************************************************************************
 * 由函數回傳指標 示範
 --回傳較大值的位址
*******************************************************************************/

#include <stdio.h>
int* max(int*,int*); 
int main()
{
    int a = 10 ,b = 10;
    int* maxOne;
    maxOne = max(&a,&b);  //maxOne是一個指標變數 要存放位址
    printf("較大的數:%d",*maxOne);  //maxOne指標變數已存放較大的值的位址,用&可以得到該位址之值

    return 0;
}
int* max(int* x,int* y){
    
    if (*x>*y){
        return x;   //回傳位址給maxOne
    }else{
        return y;   //回傳位址給maxOne
    }
    
}
