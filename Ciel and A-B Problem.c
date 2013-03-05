#include<stdio.h>
void main()
{
    int a,b,t;
    scanf("%d %d",&a,&b);
    t=a-b;
    if(t==1)printf("2");
    else if(t%10==0)
    printf("%d",t+1);
    else printf("%d",t-1);
}
