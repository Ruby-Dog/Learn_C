/******************************************************************************
* 宣告結構
->使用 struct 保留字可以宣告結構
*******************************************************************************/

#include <stdio.h>

/*搭配 typedef 來簡化結構的型別名稱：*/
typedef struct person_t person_t;


struct person_t{
    char* name;
    unsigned age;
};


/*如果想節省命名空間可進一步使用以下方式來宣告結構：*/
typedef struct {
    char *name;
    unsigned age;
} person_t2;

/*這時候的結構是匿名結構 (anonymous structure)，不會占用命名空間。*/

int main()
{
    
    
    struct person_t p1 = {"Ruby",5};
    /*但這種初始化結構的方式寫死該結構的屬性的位置，
    若屬性有更動需一併更動相關程式碼，在軟工觀點上不佳。
    可以改用以下的方法來初始化結構：*/
    struct person_t p2={
        .name = "RUBY",
        .age = 5
    };
    /*過這種方式，不用寫死結構中各個屬性的相對位置，
    日後要更動屬性時，可將要修改的部分降低。*/

    person_t p3={
        .name = "RUBY",
        .age = 5
    };
    return 0;
}

