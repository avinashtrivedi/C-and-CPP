#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
int capacity;
int size;
int *element;
}stack;
stack * createstack(int max_element)
{
stack *s;
s=(stack *)malloc(sizeof(stack));
s->element=(stack *)malloc(sizeof(int)*max_element);
s->size=0;
s->capacity=max_element;
return s;
}
void push(stack *s,int item)
{
	if(s->size==s->capacity) printf("stack is full\n");
	else
	{
		s->element[s->size]=item;
		s->size+=1;
	}
return;
}
void pop(stack *s)
{
	if(s->size==0)
	{
		printf("stack is empty::\n");
		return ;
	}
	else
	{
		printf("%d",s->element[s->size--]);
	}
	return;
}
/*void print(stack *s)
{

}*/
int main()
{
int n;
scanf("%d",&n);
stack *s=createstack(n);
printf("press 1 to push::\n");
printf("press 2 to pop::\n");
//printf("press 3 to print::\n");
while(1)
{
int t;
scanf("%d",&t);
	if(t==1)
	{
		int x;
		scanf("%d",&x);
		push(s,x);
	}
	else if(n==2)
	{
		pop(s);
	}
	/*else if(n==3)
	{
		print(s);
	}*/
	else break;
}
return ;
}

