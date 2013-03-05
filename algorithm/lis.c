//length of longest increasing subsequence........
#include<stdio.h>
void main()
{
                int n;
                printf("enter number of element::");
                scanf("%d",&n);
                int a[n];
                int i;
                for(i=0;i<n;i++)
                scanf(" %d",&a[i]);
                int ls[n];
                int j;
                int max;
                for(i=0;i<n;i++)
                {
                                ls[i]=1;
                                for(j=0;j<i;j++)
                                {
                                                if(a[i]>=a[j])
                                                {
                                                                if(ls[j]+1>ls[i])
                                                                ls[i]=ls[j]+1;
                                                }

                                }

                }
                //for(i=0;i<n;i++)
                printf("%d  ",ls[n-1]);



}
