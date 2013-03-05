//array implementation of stack.............11/8/2012
#include<stdio.h>
int upper;
void push(int *stack,int item,int top,int max)
{
        if(top==max){printf("overflow\n");return;}
        else
        {
            upper=top +1;
            stack[upper]=item;
        }
}
void pop(int *stack,int top,int max)
{
    if(top==-1){printf("underflow\n");return;}
    else
    {
        printf("%d\n",stack[top]);
        upper=top -1;
    }
}
int main()
{
    int n;
    upper=-1;
    scanf("%d",&n);
    int max=n-1;
    int stack[n];
    printf("press 1 to push\n");
    printf("press 2 to pop\n");
    while(1)
    {
        int t;
        scanf("%d",&t);
        if(t==1)
        {
            int k;
            scanf("%d",&k);
            push(stack,k,upper,max);
        }
        else if(t==2)
        {
            pop(stack,upper,max);
        }
        else break;
    }
}
