#include<stdio.h>
#include<conio.h>
void main()
{
                int p,a,b,c;
                int t,save,max;
                max=0;
                for(p=12;p<=1000;p++)
                {              t=0;
                                for(a=1;a<p;a++)
                                {
                                                for(b=a+1;b<p;b++)
                                                {
                                                                for(c=b+1;c<=p-(a+b);c++)
                                                                {
                                                                                if(((a*a)+(b*b)==c*c)&&(a+b+c==p))
                                                                                {
                                                                                                t++;
                                                                                }

                                                                }
                                                }
                                                if(t>max){max=t;save=p;}
                                }

                }
                printf("%d\t%d",save,max);
}
