/*Starting with the number 1 and moving to the right in a clockwise direction a 5 by 5 spiral is formed as follows:

21 22 23 24 25
20  7  8  9 10
19  6  1  2 11
18  5  4  3 12
17 16 15 14 13

It can be verified that the sum of the numbers on the diagonals is 101.

What is the sum of the numbers on the diagonals in a 1001 by 1001 spiral formed in the same way?*/
#include<stdio.h>
#include<conio.h>
void main()
{
                int t,sum;
                int j,i;
                t=1;
                sum=1;
                for(i=1;i<=500;i++)
                {          t+=(2*i);
                                for(j=1;j<=4;j++)
                                {     //printf("%d\n",t);
                                        sum=sum+t;
                                       if(j!=4)
                                        t+=(2*i);
                                }
                }
                printf("%d",sum);
}
