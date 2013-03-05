///A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 99.
///Find the largest palindrome made from the product of two 3-digit numbers.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void palindrome(int);
long int t=1,k=0;
void main()
{
                long int i,j,sum;
                long int cross;
  for(i=100;i<=999;i++)
  {
                  for(j=100;j<=999;j++)
                  {
                       palindrome(i*j);
                  }

  }
  printf("%d",k);
}
void palindrome(int x)
{
                int r,num=0;
                long int y=x;
  while(x!=0)         ///steps to find palindrome.............
  {
      r=x%10;
      num=(num*10)+r;
      x=x/10;
  }
  if( y==num)
           {  if(y>k)
                  k=y;
           }

}
