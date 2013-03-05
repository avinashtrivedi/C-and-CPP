#include<stdio.h>
int main()
{
    int n,s,t=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&s);
        if(s>0) t+=s;
    }
   printf("%d",t);
}
