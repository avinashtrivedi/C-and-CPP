#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
long long int a,i,j,t;
int q,b,k,c;
int arr[9]={0};


for(i=2143;i<7654321;i+=2)
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
                if(t==0)
                {
                    k=ceil(log10(i));
                    a=i;
                    b=0;c=0;
                    while((a!=0)&&(b<k))
                    {
                          arr[b]=a%10;
                          a=a/10;b++;

                    }
                    //printf("%d",k);
                    for(q=1;q<=k;q++)
                    {
                                    for(b=0;b<k;b++)
                                    {
                                                    if(arr[b]==q) {c++; break;}

                                    }

                    }
                    if(k==c) printf("%lld\n",i);
                    //else printf("nomatch\n");



                }
}
//for(i=0;i<4;i++)
//printf("%d\t",b);
return 1;

}
