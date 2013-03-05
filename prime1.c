#include<stdio.h>
#include<conio.h>
void main()
{
long long int i,j,t;
//printf("");
for(i=11;i<123;i+=2)
{
                t=0;
                if((i%3==0)||(i%5==0)||(i%7==0))continue;
                for(j=11;j<i/2;j+=2)
                {
                                if((j%3==0)||(j%5==0)||(j%7==0)){continue;}
                                if(i%j==0){t++;continue;}
                }
                if(t==0)printf("%d\n",i);
}

}
