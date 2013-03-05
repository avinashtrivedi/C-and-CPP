#include<stdio.h>
int knapsack(int,int weight[],int value[] ,int);
int max(int,int);
int main()
{
                int i,n;///n is number of items;
                int maxweight;
                scanf("%d",&n);
                int weight[n+1];
                int value[n+1];
                for(i=1;i<=n;i++)
                scanf("%d%d",&weight[i],&value[i]);
                scanf("%d",&maxweight);
                printf("%d",knapsack(n,weight,value,maxweight));


}
int max(int a,int b)
{
                return a>b?a:b;
}
int knapsack(int n,int weight[],int value[],int maxweight)
{
                int j,i;
                int v[n+1][maxweight+1];
                for(i=0;i<=maxweight;i++) v[0][i]=0;      ///base case.......
                for(i=0;i<=n;i++) v[i][0]=0;                     ///base case..............

                for(i=1;i<=n;i++)
                {
                                for(j=1;j<=maxweight;j++)
                                {
                                                if(weight[i]<=j) ///if weight[i] is taken....
                                                {
                                                                v[i][j]=max(value[i]+v[i-1][j-weight[i] ],v[i-1][j]);
                                                }
                                                else v[i][j]=v[i-1][j];        ///if weight[i] is not taken........

                                }
                }
                return v[n][maxweight];

}
