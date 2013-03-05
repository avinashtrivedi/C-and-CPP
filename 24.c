#include<stdio.h>
#include<conio.h>
void del(int ,int *);//delete array element .............
long int fact(int);
int n;
void main()
{
          int i;
          int k;
          int p;
          //int per[];
          long int j,a,b,c;
          printf("enter no of digits");
          scanf("%d",&n);
          int arr[n],per[n];
          for(i=0;i<n;i++)
          {
                          scanf("%d",arr+i);
          }
          //printf("enter permutation no...");
          /*del(3,arr);
          for(i=0;i<n;i++)
          {
                          printf("%d\n",arr[i]);
          }*/
j=a=1000000;
k=n-1;
p=0;
while(k>1)
{
b=(a-1)/fact(k);
per[p]=arr[b];
del(b,arr);
a=a%fact(k);//if(a%2==0) a=a-1;
k--;p++;
}
/*b=b/fact(2);
per[1]=arr[b];
del(b,arr);*/
                if(j%2==0)
               {
                               per[p]=arr[n-1];
                               per[p+1]=arr[n-2];

                }
                else
                {
                   per[p]=arr[n-2];per[p+1]=arr[n-1];
                }

for(i=0;i<10;i++)
{
printf("%d",per[i]);
}


}
void del(int x,int *y)
{
                int i;
    for(i=x;i<n-1;i++)
    {
                    y[i]=y[i+1];
    }
    n=n-1;
    /*for(i=0;i<n;i++)
    {
                    printf("%d\n",y[i]);
    }*/
}
long int fact(int z)
{
                int i;
                long int f=1;
             for(i=1;i<=z;i++)
             {
                   f=f*i;
             }
             return f;
}
