#include<stdio.h>
int main()
{
     int n,y;
    scanf("%d",&n);
    long long int sum,x,t;
    while(n--)
    {
        scanf("%d",&x);
        sum=0;
        t=x;
        while(x--)
        {
            scanf("%lld",&y);
            sum=(sum+y)%t;
        }
        puts(sum ? "NO" : "YES");

    }
    return 0;
}
