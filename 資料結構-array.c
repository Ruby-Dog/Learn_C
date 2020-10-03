

#include <stdio.h>
#include <stdlib.h>


int main()
{
//------------------------------------------------------- 

 /*陣列的宣告 */  
 
 //資料型別 陣列名稱[陣列的大小n]={初始值1,初始值2,.....,初始值n}
   int array1[5]={5,4,7,63,7};
   
 //宣告時不給予初始值
   int array2[6];
   
 //宣告一個可以存放5個int型態資料的一維陣列,陣列的初始值分別為1,2,3,4,宣告一個可以存放5個int型態資料
   int array3[]={1,2,3,4,5};  //可以不用說陣列多大
   int array4[5]={1,2,3,4,5};
  
  
//------------------------------------------------------- 
  
 /*陣列的存取*/  
 
 //陣列資料的提取
   int var1 = array1[0];   
   printf("var1 = %d\n",var1);
   
 //陣列資料的存入
    array1[1]=var1;
    printf("array1[1] = %d\n",array1[1]);
    
 //將常數8存放到陣列array1內索引值為3的位置處
    array1[3]=8;
    printf("array1[3] = %d\n",array1[3]);
    
    
//-------------------------------------------------------

 /*二維陣列*/
 
 //二維陣列的宣告
 //資料型別 陣列名稱[第一維度的大小][第二維度的大小]
 //宣告一個二維陣列,第一維度大小維2,第二維度大小為3,不設定初始值
   int twoArray1[2][3];
 //宣告與初始值的設定
   int twoArray2[2][3] = { {1,2,3},{4,5,6} } ;
   int twoArray3[][3] = { {1,2,3},{4,5,6} } ;  //可以不用說第一維度陣列多大
   
   
//-------------------------------------------------------   
    
 /*二維陣列的存取*/
  
 //二維陣列的提取
  int var2 = twoArray2[0][0];
  printf("var2 = %d\n",var2);
  
 //二維陣列的存取
 twoArray2[0][1] = var2;
 printf("twoArray2[0][1] = %d\n",twoArray2[0][1]);
    
 //將常數8存放到陣列twoArray2內第一維索引值為1與第二維索引值為3的位置處
    twoArray2[1][3] = 8;
    printf("twoArray2[1][3] = %d\n",twoArray2[1][3]);    

//-------------------------------------------------------
    
 /*利用巢狀迴圈存取二維陣列*/
    
    int data1[2][3]={ {1,2,3},{4,5,6} };
    int data2[][3]={ {1,2,3},{4,5,6} };
    printf("-----------\n");
    printf("二維陣列data1 : \n");
    printf("-----------\n");
    int i,j;
    for(i=0 ;i<2 ;i++){
        for(j=0 ; j<3 ;j++){
            printf("%d ",data1[i][j]);
        }
        printf("\n");
    }
    printf("-----------\n");
    
    
//-------------------------------------------------------   

 /*利用陣列表示 一元n次多項式 */
 
  



//-------------------------------------------------------   
    
//-------------------------------------------------------   

   /*矩陣 matrix*/
   
   /*矩陣相加*/
      
    double A[3][4]={ {1,0,0,0.7} , {0,1,0,0} , {0,0,1,0}  } ;
    
    //m為列   n為行
    int add_matrix(const int m , const int n ,double A[][n] ,double B[][n] ,double C[][n]){
        int i=0,j=0;
        for(i=0 ;i<m ;i++){
            for(i=0 ;i<m; i++){
                C[i][j] = A[i][j]+B[i][j];
            }
        }
    }
  



//-------------------------------------------------------   

   /*矩陣相乘*/
   // https://www.youtube.com/watch?v=VGSfnZQQf5w
   // http://mail.tlsh.tp.edu.tw/~h397/teach/teach_2-2.htm
      
 
 
 
//-------------------------------------------------------         
    //return 0 : OK
    //return 1 :faluire
    return 0;
}
