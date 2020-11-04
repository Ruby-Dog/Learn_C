/******************************************************************************
 * 內嵌在結構內的結構
 -> 由於結構視為一種型別，我們可以在結構內嵌入另一個結構
*******************************************************************************/

#include <stdio.h>
#include <assert.h>
#include <string.h>

typedef struct person_t person_t;

struct person_t{
    char *name;
    unsigned age;
};

typedef struct employee_t employee_t;

struct employee_t{
    person_t p;
    double salary;
};



int main()
{
    employee_t ee ={
        .p = { .name = "RUBY", .age = 5},
        .salary = 99999.0
    };
    
    /*int strcmp(const char *str1, const char *str2) 
    cmp = compare
    -> 需要兩個字串當作參數，比較兩個字串是否相等。
    
     * str1 -- 這是第一個要比較的字符串。
     * str2 -- 這是第二個的字符串進行比較。  
     
     --> (相等就回傳 0，第一個字串大於第二個字串回傳正值，反之回傳負值。)
            這個函數的返回值如下：
            如果返回值<0，則表明str1小於str2
            如果返回值，如果> 0，則表明str2 小於 str1
            如果返回值= 0，則表明str1 等於str2  */
    assert(strcmp(ee.p.name,"RUBY")==0);
    assert(ee.p.age == 5);
    assert(ee.salary ==99999.0);
    
    
    /*但結構內不能嵌入同一個結構，也就是結構不能遞迴宣告。
    相對來說，結構內可以放入指向同一結構的指針，
    在資料結構上常見這種特性。*/

    return 0;
}
