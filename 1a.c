///What is the 10001st prime number?
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
                long long int i=2;
                int k,j,count=0;
  while(i )
  { k=0;

                  for( j=2;j<=i;j++)
                  {
                                  if( i%j==0) k++;

                  }
         if( k==1)
         {
              count++;
         }
         if(count==10001) {printf("10001 st prime number is %d",i); break ;}
i++;
  }
}
