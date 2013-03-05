///The prime factors of 13195 are 5, 7, 13 and 29.
/// What is the largest prime factor of the number 600851475143 ?
#include<stdio.h>
#include<conio.h>
#include<math.h>
void prime_check();
void main()
{
             long  long int i;
                for(i=2;i<=300425737571;i++)       ///
                {
                     if(600851475143%i==0) {prime_check(i);}
                }
}
void prime_check(int i)
{
                int largest;
     long long int j;
     int k=0;
      for(j=2;j<=i;j++)
      {
           if(i%j==0) k++;
      }
      if(k==1) {largest=i;
        printf("largest_prime_factor is:: %d\n",largest);}
}
