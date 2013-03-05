#include<stdio.h>
#include<math.h>
void main()
{
                int n;
                int i;
                int t=0;
                scanf("%d",&n);
                while(n)
                {
                                t=t+n/5;
                                n=n/5;
                }
                printf("%d",t);
}
