#include<stdio.h>
#include<conio.h>
#include<math.h>
int digit(int);
void main()
{
    int i,j;
    int l;
    int k,t;
    int b,a;
    int arr[9]={0};
    for(i=9;i<10;i++)
    {               k=1;t=9;b=0;
                    do
                    {
                                    a=i*k;
                                    if(a!=1)l=ceil(log10(a));
                                    else l=1;
                                for(j=b;j<l+b;j++)
                                {
                                                if(a>10)
                                                {
                                                arr[j]=a/10;a=a%10;}
                                                else arr[j]=a;

                                }
                                    t-=l;b=l+b;k++;
                    }while(t!=0);
    }

for(i=0;i<9;i++)
{
      printf("%d\n",arr[i]);
}

}

