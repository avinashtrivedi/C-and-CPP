#include<stdio.h>
#include<conio.h>
int main()
{
long long int i,j,t,sum=17;


for(i=11;i<2000000;i+=2)
{
                t=0;
                if((i%3==0)||(i%5==0)||(i%7==0))continue;
                for(j=2;j*j<=i;j++)
                {
                                if((j%3==0)||(j%5==0)||(j%7==0))
                                {continue;
                                }

                            if(i%j==0){t++;break;}

                }
                if(t==0) {
                sum=sum+i;
                 printf("%lld\n",i);

                }
}


printf("%lld",sum);
return 1;

}
