// question 30
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

                int i,j;
                int a;
                int t,sum;
                int sum1=0;
                for(i=2;i<1000000;i++)
                {
                                t=i;
                                sum=0;
                                while(t!=0)
                                {
                                      a=t%10;
                                      sum=sum+pow(a,5);
                                      t=t/10;
                                }
                                if(i==sum){  sum1=sum1+i;
                                 //printf("%d\n",i);

                                }
                }
                 printf("%d\n",sum1);

}
