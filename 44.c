#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{

     //int i;
     long long int t,p,h;
 int a,b,c;

     for(a=27700;a<=100;a--)
     {
                     t=a*(a+1)/2;
                     for(b=a;b>2;b--)
                     {
                           p=b*(3*b-1)/2;
                           if(t==p)
                           {
                                           //printf("gggggg");
                                for(c=b;c>2;c--)
                                {
                                                h=c*(2*c-1);
                                                if(h==p) {printf("%d\t%d\t%d\n",a,b,c);exit;}
                                }

                           }
                     }

     }

}
