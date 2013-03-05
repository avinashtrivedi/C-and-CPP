#include<stdio.h>
int max(int a,int b)
{
     return a>b? a:b;
}
int main()
{
                int n,i,j,k,x;
                int a[100][100];
                scanf("%d",&n);
                while(n-->0)
                {scanf(" %d",&k);
                                x=k-1;
                                for(i=0;i<k;i++)
                                {
                                                for(j=0;j<=i;j++)
                                                scanf("%d",&a[i][j]);
                                }
                                for(i=x-1;i>=0;i--)
                                {
                                                for(j=0;j<=i;j++)
                                                {
                                                                a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
                                                }
                                }
                                printf("%d\n",a[0][0]);
                }
}
