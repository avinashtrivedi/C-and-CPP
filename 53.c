#include<stdio.h>
unsigned long int fact(int);
int main()
{
    int i,j;
    int t=0;
    for(i=23;i<=100;i++)
    {
        for(j=4;j<=i/2;j++)
        {
            if(fact(i)/(fact(j)*fact(i-j))>1000000)
            {
                if(i%2==0)
                t=2*((i/2) - i) +1;
                else
                t=2*((i/2) - i) ;
            }
        }
    }
    printf("%d",t);
}
unsigned long int fact(int a)
{
    if(a==1) return 1;
    else return a*fact(a);
}
