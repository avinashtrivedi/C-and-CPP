#include<stdio.h>
#include<stdlib.h>
int max;
typedef struct Node
{
    int data;
    struct Node *next;
}node;
void push(node *pointer,int item)
{
    //if(max==5) {printf("OVERFLOW\n");return;}
    node *temp;
    temp=pointer->next;
    pointer->next=(node *)malloc(sizeof(node));
    pointer=pointer->next;
    pointer->data=item;
    pointer->next=temp;
   // if(max==0){temp->next=NULL;}
    max++;
}
void print(node *pointer)
{
    printf("----------------------------------------\n");
    while(pointer->next !=NULL)
    {
        printf("%d  ",pointer->data);
        pointer->next;
    }
    printf("%d",pointer->data);
    printf("\n-----------------------------------------\n");
}
void pop(node *pointer)
{
   node *temp;
   temp=pointer->next;
   pointer->next=temp->next;
   free(temp);
}
void main()
{
    max=0;
    node *start;
    start=(node *)malloc(sizeof(node));
    start->next=NULL;
    printf("press 1 to push::\n");
    printf("press 2 to pop::\n");
    printf("pres 3 to print::\n");
    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n==1)
        {
          int data;
          scanf("%d",&data);
          push(start,data);
        }
        else if(n==2)
        {
            pop(start);
        }
        else if(n==3)
        {
            print(start->next);
        }
        else  break;
    }
}
