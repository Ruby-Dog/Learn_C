
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node NODE; 

int main()
{
    int i,num;
    NODE *first,*current,*previous;
    printf("Number of nodes:");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        current=(NODE*)malloc(sizeof(NODE));
        printf("請輸入第%d個節點的資料:",i+1);
        scanf("%d",&(current->data));
        if(i==0){
            first=current;
        }else{
            previous->next=current;
        }
        current->next=NULL;
        previous=current;
        
    }
    
    current=first;
    
    while(current!=NULL){
        printf("address=%p, ",current);
        printf("data=%d ,",current->data);
        printf("next=%p \n",current->next);
        current=current->next;
    }
    
    
    
    return 0;
}
