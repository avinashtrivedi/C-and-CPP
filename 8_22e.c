//geek4geek,22/8/2012.
//Write a program to add one to a given number.
// You are not allowed to use operators like ‘+’, ‘-’, ‘*’, ‘/’, ‘++’, ‘–’ …etc.
#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int m=1;
    while(n&m)
    {
        n=n^m;
        m<<=1;
    }
    n=n|m;  //n=n^m;
    printf("%d",n);
}
