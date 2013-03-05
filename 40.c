#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

                int t,i,j;
                int t1,t2,t3;
                int k;
                int count;
                int a;
                int arr[9]={0};
                for(i=1;i<=99;i++)
                {
                                t1=i;
                                for(j=100;j<=2000;j++)
                                {
                                               t2=j;t3=i*j;k=0;count=0;
                                                if(ceil(log10(i))+ceil(log10(j))+ceil(log10(i*j))==9)
                                                {
                                                                while(t1!=0)
                                                                {
                                                                                arr[k]=t1%10;
                                                                                t1=t1/10;k++;
                                                                }
                                                                while(t2!=0)
                                                                {
                                                                                arr[k]=t2%10;
                                                                                t2=t2/10;k++;
                                                                }
                                                                while(t3!=0)
                                                                {
                                                                                arr[k]=t3%10;
                                                                                t3=t3/10;k++;
                                                                }
                                                                for(a=1;a<=9;a++)
                                                                {
                                                                                for(k=0;k<=9;k++)
                                                                                {
                                                                                                if(arr[k]==a)
                                                                                                {
                                                                                                                count ++;break;

                                                                                                }

                                                                                }
                                                                }
                                                                if(count==9)
                                                                printf("%d\t%d\t%d\n",i,j,i*j);

                                                }
                                }
                }

}
