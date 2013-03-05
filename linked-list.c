#include<stdio.h>
typedef struct Node
{
    int info;
    struct Node *link;
}node;
void print(node *pointer)
{
    while(pointer->link!=NULL)
    {
        printf("%d  ",pointer->info);
        pointer=pointer->link;
    }
    printf("%d\n",pointer->info);
}
void insert(node *pointer,int item)
{
    while(pointer->link!=NULL)
    pointer=pointer->link;
    pointer->link=(node *)malloc(sizeof(node));
    pointer=pointer->link;
    pointer->info=item;
    pointer->link=NULL;
}
void delete(node *pointer,int item)
{
    node *temp;
    while(pointer->link!=NULL && (pointer->link)->info!=item)
    pointer=pointer->link;
    if(pointer->link == NULL)printf("element is not present\n");
    temp=pointer->link;
    pointer->link=temp->link;
    free(temp);
    return ;
}
int main()
{
    node *start;
    start=(node *)malloc(sizeof(node));
    start->link=NULL;
    printf("press 1 to insert data\n");
    printf("press 2 to delete data\n");
    printf("press 3 to print data\n");
    while(1)
    {
        int t;
        scanf("%d",&t);
        if(t==1)
        {
            int item;scanf("%d",&item);
            insert(start,item);
        }
        else if(t==2)
        {
            int item;scanf("%d",&item);
            delete(start,item);
        }
        else if(t==3)
        {
            print(start->link);
            printf("\n");
        }
    }
}
