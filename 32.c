/// question 40........projecteuler.......
#include<stdio.h>
#include<conio.h>
#include<math.h>
int func(int,int);
int main()
{
                int i,j;
                int t=0;
                int x;
                int k;
                int r;
                int arr[7]={0};
                int mul=1;
                for(i=1;;i++)
                {                x=0;k=0;
                                switch(i)
                                {
                                                case 1:t=t+1;x=1;break;
                                                case 10:t+=2;x=1;break;
                                                case 100:t+=3;x=1;break;
                                }
                                if(x!=1)t=t+ceil(log10(i));
                                if(t==1) mul=mul*1;
                                if((t>=10)&&(arr[1]==0))
                                {k=t-10;arr[1]=1;r=func(i,k);mul=mul*r;}
                                else if((t>=100)&&(arr[2]==0))
                                { k=t-100;arr[2]=1;r=func(i,k);mul=mul*r;}
                                else if((t>=1000)&&(arr[3]==0))
                                { k=t-1000;arr[3]=1;r=func(i,k);mul=mul*r;}
                                else if((t>=10000)&&(arr[4]==0))
                                { k=t-10000;arr[4]=1;r=func(i,k);mul=mul*r;}
                                else if((t>=100000)&&(arr[5]==0))
                                { k=t-100000;arr[5]=1;r=func(i,k);mul=mul*r;}
                               else if((t>=1000000)&&(arr[6]==0))
                                { k=t-1000000;arr[6]=1;r=func(i,k);mul=mul*r;
                                printf("%d",mul); return 1;}

                }

}
int func(int a,int b)
{
                int i;
                int t;
      for(i=0;i<=b;i++)
      {
              t=a%10;
              a=a/10;
      }
      return t;
}
