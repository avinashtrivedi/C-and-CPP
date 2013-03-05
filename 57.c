#include<stdio.h>
#include<stdint.h>
int digit(int64_t);
int main()
{
    int i,k;
    k=0;
     int64_t a,b,t,p;
    a=2;b=5;
    for(i=3;i<=1000;i++)
    {
        t=b;p=a;
        b=2*b +a;
        a=t;
        if(digit(3*t +p) >digit(2*t +p))k++;
        //printf("%d  %d\n",3*t +p,2*t +p);
    }
printf("%d",k);
    return 0;
}
int digit( int64_t x)// return number of digits in x;
{
    int n=0;
    while(x!=0)
    {
        x/=10;
        n++;
    }
return n;
}

