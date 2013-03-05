#include<stdio.h>
int main()
{
                 long  int j,sum,i;
                sum=0;
                scanf("%lld",&i);
                for(j=1;j<=i/2;j++)
                {
                                if(i%j==0) sum+=j;
                }
                if(sum==i)printf("YES\n");
                else printf("NO\n");

                return 0;
}
