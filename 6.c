/*A Pythagorean triplet is a set of three natural numbers, a  b  c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define SUM 1000
int main()
{
     int a,b,c;
     int i,j,k;
     i=1;
     while(i)
     {  j=i+1;
         while(j)
         {// k=j+1;
            for(k=j+1;k<=SUM-i-j;k++)
            {
                            if((i*i +j*j ==k*k)&&(i+j+k==SUM))
                            {
                                            printf("%d\t%d\t%d",i,j,k); return 0;
                            }

            }
            if(i+j+k-1>SUM)goto avi;
            j++;
         }
           avi:
           i++;

     }
//return 0;
}
