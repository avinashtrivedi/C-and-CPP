/*The number, 197, is called a circular prime because all rotations of the digits: 197, 971, and 719, are themselves prime.

There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.

How many circular primes are there below one million?     */
///**///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#include "digit.h"
#include "prime.h"
#include<math.h>
void main()
{
long long int i,j,c,l;
long long int d,n,p;
long long int c1=0;

for(i=11;i<=1000000;i++)
{         d=digit(i);n=i;
            l=0;p=0;
                while((prime(n))&&(l==0))
                {
                         //printf("%d\t",n);
                         c=pow(10,d-1);
                         n=(n%c) *10 +(n/c);

                         p++;
                         if(p==d) { printf("%d\n",i); l=1;  c1++;}
                }

}
printf("number of circular prime==%d",c1);

}
