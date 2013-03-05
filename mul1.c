///2^1000..........
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int arr[400];
int t,i,j,r;
int s=0;
for(i=0;i<400;i++)
{
                arr[i]=0;
}
arr[399]=2;
for(i=1;i<=999;i++)       //1000-1;
{            j=399;r=0;
                while(j>=0)
                {
                                t=((arr[j]*2 )+r);arr[j]=t%10;
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
