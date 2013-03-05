///No_digits(N!) = floor(log10(N) + log10(N-1) + log10(N-2) + ...+log10(2) + log10(1) ) +1
#include <stdio.h>
#include <math.h>
int main()
{
int x,y;
float sum=0;
scanf("%d",&x);
for(y=1;y<=x;y++)
sum+=log10(y);
printf("%d",(int)sum+1);
}

