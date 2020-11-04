/******************************************************************************
* 儲存結構的陣列
-> 由於結構在整體上視為一個新型別，我們可以用陣列來儲存多個結構
*******************************************************************************/

#include <assert.h>
#include <stddef.h>
#include <stdio.h>

typedef struct point_t point_t;  //將 struct point_t取名為 point_t
 
struct point_t{
    double x;
    double y;
};

int main()
{
    point_t pts[] = {
        {.x =0.0 , .y = 0.0},
        {.x =1.0 , .y = 2.0},
        {.x =3.0 , .y = 4.0},
    };
    
    /*size_t 是個機器特定的無號型態，定義於 stddef.h 標頭檔，
    保證夠大可以容納任何物件，若資料結構具有長度或索引概念，
    而且需要很大的容量，例如陣列，可以使用 size_t 型態變數來實作長度或索引。*/
    for (size_t i = 0 ; i<3 ; i++){
        printf("(%.2f,%.2f)\n",pts[i].x ,pts[i].y);
    }
    return 0;
}
