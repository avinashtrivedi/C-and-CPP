//print non_fibonacci series;
//avinash_trivedi,21/8/2012;
#include<stdio.h>
int main()
{
    int a,b,c;
    a=3;b=5;
    int i;
    int t=4;
    while(t--)
    {
        for(i=a+1;i<b;i++)
        printf("%d  ",i);
        c=b;
        b=a+b;
        a=c;
    }
}
