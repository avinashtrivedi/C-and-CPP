/*Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a  b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int j;
void function(int);
void main()
{

   int i;
   int sum;
   for(j=2;j<=10000;j++)
   {
                   sum=0;
   for(i=1;i<=j/2;i++)
   {
        if(j%i==0)
        {
            sum=sum+i;
        }
   }
   //printf("%d\n",sum);
function(sum);
//avi:
   }
}
void function(int sum)
{ int i;
                int sum1=0;
    for(i=1;i<=sum/2;i++)
   {
        if(sum%i==0)
        {
            sum1=sum1+i;
        }
   }
   //printf("%d\n",sum1);
   if((sum1==j)&&(j!=sum))
    {printf("\n%d\t%d",j,sum);}
   //goto avi;
}
