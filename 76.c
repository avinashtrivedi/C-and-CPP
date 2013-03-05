/*using  generating function */
#include<stdio.h>
unsigned int generating_func(int);
unsigned long int p[101],sum,x,y;
int k;
int main()
{
    //sum=0;
    int i;
    for(i=1;i<=100;i++) p[i]=0;
    p[0]=1;
    y=generating_func(3);
    printf("%lu",y);
}
unsigned int generating_func(int n)
{
    if(n<0) return 0;
    if(n==0) return 1;
    if(p[n]>0) return p[n];
    sum=0;
    for(k=1;k<=n;k++)
    {
        if(k%2==1)
        {sum=sum+(generating_func(n-k*(3*k-1)/2) +generating_func(n-k*(3*k+1)/2));
        //printf("k is :%d  sum is %d\n",k,sum);
        }
        else
        {sum=sum-(generating_func(n-k*(3*k-1)/2) +generating_func(n-k*(3*k+1)/2));
        //printf("k is :%d sum is %d\n",k,sum);
        }
    }
    if(n>0)p[n]=sum;
     //printf("%lu\n",p[n]);
    return sum;
}
