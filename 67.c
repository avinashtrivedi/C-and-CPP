#include<stdio.h>
int max(int,int);
int main()
{
                int n;
                int i,j;
                int a[100][100];
                int k;
                int x;
                //scanf("%d",&n);
                //while(n-->0)
                //{
                                scanf(" %d",&k);
                                x=k-1;
                                for(i=0;i<k;i++)
                                {
                                                for(j=0;j<=i;j++)
                                                scanf("%d",&a[i][j]);
                                                //printf("\n");
                                }
                                for(i=x-1;i>=0;i--)
                                {
                                                for(j=0;j<=i;j++)
                                                {
                                                                a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
                                                }
                                }
                                printf("%d\n",a[0][0]);
                //}
   return 0;
}
int max(int a,int b)
{
     if(a>b)return a;
     else return b;
}
