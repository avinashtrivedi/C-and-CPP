//(1) project euler .............................
#include<stdio.h>
void main()
{
    int i;
    int sum=0;

for(i=1;i<1000;i++)
{
    if((i%3==0)&&(i%5==0))
        sum = sum + i;
}
printf("sum of all numbers divisible by 3 and 5 is::%d",sum);
}
