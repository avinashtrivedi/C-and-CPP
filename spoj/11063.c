#include<stdio.h>
int main()
{
                int n;
                scanf("%d",&n);
                long long int a,b,c;
                long long int t,i;
                while(n--)
                {
                                scanf("%lld %lld %lld",&a,&b,&c);
                                t=2*c/(a+b);// no of term
                                c=(b-a)/(t-5); //common diff
                                a=a-2*c;
                                i=0;
                                printf("%lld\n",t);
                                while(i<t)
                                printf("%lld ",a+(i++)*c);
                                printf("\n");
                }
                return 0;
}
