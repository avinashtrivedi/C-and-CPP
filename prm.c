///The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
///Find the sum of all the primes below two million.
#include<stdio.h>
#include<conio.h>
#include "prime.h"
void main()
{
                long int i;
                int t;
                long int sum=5;
                for(i=5;i<=10;i+=2)
                {
                                if(i%2==0) continue ;
                        t=prime(i);
                        if(t==1) {printf("%d\n",i);sum=sum+i;}
                }
                //printf("%d",sum);
}
