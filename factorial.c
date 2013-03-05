/*n! means n  (n  1)  ...  3  2  1

For example, 10! = 10  9  ...  3  2  1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100! */
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[400];
int t,i,j,r;
int s=0;
for(i=0;i<400;i++)
{
                arr[i]=0;
}
arr[399]=1;
for(i=2;i<=100;i++)       //1000-1;
{            j=399;r=0;
                while(j>=0)
                {
                                t=((arr[j]*i )+r);arr[j]=t%10;
                                r=t/10; j--;
                                //if(r==0) break;
                }
                //printf("gggg\n");
}
for(i=0;i<400;i++)
{
                s=s+arr[i];
}
                printf("%d\t",s);
}
