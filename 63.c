#include<stdio.h>
#include<math.h>
int no_digit(long int);
int main()
{
    long int i;
    int t;
    float a;
    int k=0;
    for(i=16807;;i++)
    {
        printf("%d\n",k);
        t=no_digit(i);
        a=pow(i,pow(t,-1));
        if(ceil(a)==floor(a)) k++;
        //printf("%d\n",k);
    }
}
int no_digit(long int a)
{
    if(a==10) return 2;
    else if(a==100) return 3;
    else if(a==1000) return 4;
    else if(a==10000) return 5;
    else if(a==100000) return 6;
    else if(a==1000000) return 7;
    else return(ceil(log10(a)));
}
