/*
p(n)=n^2+n+41 generate prime number for n->[0,40)
so,by mathematical prove p(n-x)=(n-x)^2 + (n-x) +41 produce prime for n->[0,80)
and so on.........
1) find largest prime within 1000.
2) say it will be 971 then find value of n for which 971 is generated...
3) put this n .....x^2 -x(2*n+1) + p(n);
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
                int i;
                int j;
                int t;
                t=(-1+sqrt(1+4*959))/2;
                i=t*t +t +41;
                j=-i*(2*t +1);
                printf("%d",j);
                return 1;


}

