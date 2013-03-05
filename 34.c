#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int tt;
long t,i,j;
long s,sum;
s=0;
for(i=11;i<=455338;i++)  ///455338 sum of fact from 0-9.
{
                t=i;sum=0;
     while(t!=0)
     {
          sum=sum+fact(t%10);
          t=t/10;
     }
     if(sum==i) s=s+i;
}

printf("%ld",s);
}
int fact(int x)
{
                if((x==1)||(x==0))return 1;
                else return(x*fact(x-1));

}
