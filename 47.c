#include<stdio.h>
#include<conio.h>
#include<math.h>
int prime(int);
void main()
{
                long int i,j;
                int g;
                int r;
                double k;
                int t;
                long int arr[10000]={0};
                arr[0]=2;arr[1]=3;arr[2]=5;arr[3]=7;
                long int a;
                a=4;
for(i=11;i<100000;i+=2)
{
             //if((i%3==0)||(i%5==0)||(i%7==0))continue;
              t=prime(i);
                if(t==0) {arr[a]=i;a++;}
                //else printf("%d\n",i);
}
//for(i=0;i<a;i++)printf("%d\n",arr[i]);
//checking for composite number.................

for(i=11;i<100000;i+=2)
{
    if(prime(i))
    {
                    g=0;r=0;
                    while(arr[g]<i)
                    {
                          k= sqrt((i-arr[g])/2);
                          if(floor(k)==ceil(k)) {r=1;break;}
                          g++;
                    }
                   if(r==0) {printf("%d",i);break;}

    }
}

}
int prime(int i)
{
                int j,t;
       t=0;

                for(j=2;j*j<=i;j++)
                {
                                /*if((j%3==0)||(j%5==0)||(j%7==0))
                                {continue;
                                }*/

                            if(i%j==0){t++;break;}

                }
                return t;
}
