#include<stdio.h>
int main()
{
                long int i;
                int b,a,t;
                int sum,mul;
                long int n;
                int h;
                long int count=0;

                for(i=1;;i++)
                {

                   t=i;sum=0;mul=1;
                         while(t!=0)
                         {
                                         a=t%10;
                                         sum=sum+a;
                                         mul=mul*a;
                                         t=t/10;

                         }

                                if(mul%sum==0)
                                {
                                count++;
                                if(count==n)
                                printf("%ld\n",i);
                                }

                }

return 0;
}
