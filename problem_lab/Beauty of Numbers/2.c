#include<stdio.h>
void func(int,int);
void main()
{
                int a,b;
                scanf("%d,%d",&a);
                scanf("%d",&b);
                func(a,b);

}
void func(int a,int b)
{
                int t,c;
                while(a%b!=0)
                {c=a/b;
                t=b;
                printf("%d\t",c);
                b=a%t;
                a=t;
                }
                printf("%d",a/b-1);

}
