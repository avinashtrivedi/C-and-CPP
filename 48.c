#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,k,t,m;
   int r1,r2;
   int arr[3002]={0};
   int sum[3002]={0};
   for(i=1;i<=1000;i++)
   {
                   arr[999]=i;r2=0;
                   for(j=1;j<i;j++)
                   {
                                   t=999;r1=0;
                                   while(t>=0)
                                   {
                                                   m=(arr[t]*i)+r1;
                                                   arr[t]=m%10;
                                                   r1=m/10;
                                                   t--;
                                   }
                                   //for(i=0;i<5;i++){printf("%d",arr[i]);}

                   }
                   t=999;
                   while(t>=0)
                   {
                         m=arr[t]+sum[t]+r2;
                         sum[t]=m%10;
                         r2=m/10;
                         arr[t]=0;
                         t--;
                   }


   }
   for(i=0;i<3002;i++)
   {
                   printf("%d",sum[i]);
   }
}
