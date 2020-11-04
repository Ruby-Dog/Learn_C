/******************************************************************************
 * 存取結構內屬性
 -> 使用 . (點號) 可存取結構內的屬性
*******************************************************************************/

#include <stdio.h>
#include <assert.h>

typedef struct point_t point_t;

struct point_t{
    double x;
    double y;
};

int main()
{
    point_t pt = {
        .x = 3.0,
        .y = 4.0
    };
    
    /*assert() 
    斷言
    若條件成立則無反應，否則程序執行到斷言處終止*/
    assert(pt.x == 3);
    assert(pt.y == 4);

    return 0;
}
