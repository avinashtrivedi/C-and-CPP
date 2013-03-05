#include<stdio.h>
#include<stdint.h>
#include<iostream>
int main()
{
    int64_t a,b,i,k,t;
    while(1)
    {
        scanf("%I64d %I64d",&a,&b);
        t=0;
        if(a==-1&&b==-1) break;
        for(i=a;i>0;i--)
        {
            scanf("%I64",&k);
            t+=i*k;
        }
        printf("%I64d\n",t*b);
    }
}
