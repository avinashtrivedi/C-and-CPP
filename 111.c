#include<stdio.h>
#include<conio.h>
#include<string.h>
int prime(int,long int *);
int main()
{
long long int i,j,t,sum;
int save=0;
long int g=0;
int h;
int loc=0;
//int f=4;
long int arr[100000]={0};
arr[0]=2;arr[1]=3;arr[2]=5;arr[3]=7;
int k,x=4;
for(i=11;i<1000000;i+=2)
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
                  //if(i<=10) f++;
                  arr[x]=i;x++;
                }
}
//printf("\t%d\n",f);
for(i=0;i<x;i++)
{              if(arr[i]<1000000/2) g++;
                printf("%lld\n",arr[i]);
}
//printf("\t%d",g);
/*for(i=1;i<=8;i++)
{*/
                for(j=0;j<g;j++)
                {       sum=0;h=0;
                                for(k=j;k<=g;k++)
                                {
                                                sum=sum+arr[k];h++;
                                                if(sum>1000000) break;
                                              else if(prime(sum,arr))
                                                {
                                                   if (h>loc)
                                                 {

                                                 save=sum;loc=h;}
                                                  //printf("\t%d\t%d\n",save,loc);
                                                 }
                                                 else {}
                                                 //printf("\t%d\t%d\n",save,loc);


                                }
                               // printf("\t%d\t%d\n",save,loc);

              }
//}//


printf("\t%d\t%d",save,loc);
return 1;

}
int prime(int a,long int *b)
{
                int i;
                for(i=0;i<100000;i++)
                {
                                //printf("%d\n",b[i]);
                                if(b[i]==a) return 1;
                }
              return 0;
}
