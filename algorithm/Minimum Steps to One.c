#include<stdio.h>
int min(int,int);
int main()
{
                int n;
                scanf("%d",&n);
                int dp[n+1];
                int i;
                dp[1]=0;
                for(i=2;i<n+1;i++)
                {
                            dp[i]=dp[i-1];
                            if(i%2==0)    dp[i]=1+min(dp[i],dp[i/2]);
                            if(i%3==0)    dp[i]=1+min(dp[i],dp[i/3]);
                }
                printf("%d",dp[n]);
                return 0;

}
int min(int a,int b)
{
                return a>b? b:a;
}
