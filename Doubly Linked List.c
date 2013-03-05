#include<stdio.h>
typedef struct Node
{
    int info;
    struct Node *forw;
    struct Node *backw;
}node;
void insert(node *pointer,int item)
{
    while(pointer->forw!=NULL)
        pointer=pointer->forw;
    pointer->forw=(node *)malloc(sizeof(node));
    (pointer->forw)->backw=pointer;
    pointer=pointer->forw;
    pointer->info=item;
    pointer->forw=NULL;

}
void delete(node *pointer,int item)
{
    //pointer=pointer->forw;
    while(pointer->forw!=NULL && (pointer->forw)->info !=item)
        pointer=pointer->forw;
    if(pointer->forw ==NULL){ printf("item not found\n");return;}
node *temp;
//temp->forw=NULL;
temp=pointer->forw;
pointer->forw=temp->forw;
(pointer->forw)->backw=pointer;
free(temp);
}
void print(node *pointer)
{
    printf("-------------------------------------\n");
    while(pointer->forw !=NULL)
    {
        printf("%d   ",pointer->info);
        pointer=pointer->forw;
    }
    printf("%d  \n",pointer->info);
    printf("-------------------------------------\n");
}
int main()
{
    node *start,*temp;
    start=(node *)malloc(sizeof(node));
    temp=start;
    temp->forw=temp->backw=NULL; //1st node is dummy node and
                                                            //doesn,t contain data;
   printf("press 1 for insert\n");
   printf("press 2 for delete\n");
   printf("press3 to print\n");
   while(1)
   {
       int n;
       scanf("%d",&n);
           if(n==1)
           {
               int item;
               scanf("%d",&item);
               insert(start,item);
           }
           else if(n==2)
           {
               int item;
               scanf("%d",&item);
               delete(start,item);
           }
           else if(n==3)
           {
               print(start->forw);
           }

       }
}

