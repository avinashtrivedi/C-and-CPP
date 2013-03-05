// find larger no without if-else,comparision etc..;
//22/8/2012
#include<stdio.h>
main()
{
    int a,b;
    scanf("%d  %d",&a,&b);
    int t=a-b;
    t+=abs(t);
    t?printf("%d is larger",a): printf("%d is larger",b);
}
