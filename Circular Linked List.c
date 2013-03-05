#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int info;
    struct Node *link;
}node;
void insert(node *pointer,int item)
{
    node *start=pointer;
    while(pointer->link!=start)
    {
        pointer=pointer->link;
    }
    pointer->link=(node *)malloc(sizeof(node));
    pointer=pointer->link;
    pointer->info=item;
    pointer->link=start;
}
void delete(node *pointer,int item)
{
node *start=pointer;
while(pointer->link!=start && (pointer->link)->info !=item)
{
    pointer=pointer->link;
}
if(pointer->link==NULL){printf("item not found\n"); return ;}
node *temp;
temp=pointer->link;
pointer->link=temp->link;
free(temp);
return ;
}
void print(node *pointer)
{
    node *start=pointer;
    pointer=start->link;
    printf("-----------------------------------\n");
    if(pointer==start) {printf("EMPTY\n");return;}
    while(pointer->link!=start)
    {
        printf("%d  ",pointer->info);
        pointer=pointer->link;
    }
    printf("%d \n",pointer->info);
    printf("-----------------------------------\n");
}
int main()
{
    node *start;
    start=(node *)malloc(sizeof(node));
    start->link=start;
    printf("press 1 to insert\n");
    printf("press 2 to delete\n");
    printf("press 3 to print\n");
    while(1)
    {
        int n;scanf("%d",&n);
        if(n==1)
        {
            int item;
            scanf("%d",&item);
            insert(start,item);
        }
        else if(n==2)
        {
            int item;scanf("%d",&item);
            delete(start,item);
        }
        else if(n==3)
        {
            print(start);
        }
    }
}
