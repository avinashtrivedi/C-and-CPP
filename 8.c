#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int function(int,int);
int main()
{

long long int t,i,a,b;
int c;
a=b=1;
i=3;
while(i)
{
c=a+b;
a=b;
b=c;
t=function(c,i);
if(t==1) exit(0);
i++;
}
getch();
}
int function(int c,int i)
{
int k=0;
while(c!=0)
{
k++;
c=c/10;
}
if(k==1000)
{
printf("%d",i); return (1);
}
}
