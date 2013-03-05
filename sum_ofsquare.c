/*The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025-385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
ans:----25164150....
*/
#include<stdio.h>
#include<conio.h>
void main()
{
                int i,sum1,sum2;
                sum1=sum2=0;
                int diff;
                for(i=1;i<=100;i++)
                {
                                sum1=sum1+i*i;
                                sum2=sum2+i;
                }
                diff=sum2*sum2 -sum1;
                printf("%d",diff);

}
