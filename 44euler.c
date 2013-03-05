#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int a,b,c;
    long int t,x,y,z,max;
    float t1,t2;
   for(x=4;;x++)
   {
                   a=x*(3*x-1)/2;
                   for(y=3;y<x;y++)
                   {
                                   b=y*(3*y-1)/2;
                                   t1=(1+sqrt(1+24*abs(a-b)))/6;
                                   t2=(1+sqrt(1+24*(a+b)))/6;
                                   if((floor(t2)==ceil(t2))&&(floor(t1)==ceil(t1)))
                                   {              //if(t>abs(a-b)) t=abs(a-b);
                                                   printf("%d\t%d\t%lld\n",x,y,abs(a-b));return 1;
                                   }
                   }
   }
   //printf("%d",t);
}
