#include<stdio.h>
int main()
{
                int n;
                scanf("%d",&n);
                int a,b,c;
                while(n--)
                {
                                scanf("%d %d %d",&a,&b,&c);
                                printf("%d\n",a*(2*b+(a-1)*c)/2);

                }
}
