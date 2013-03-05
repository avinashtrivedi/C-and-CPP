#include<stdio.h>
#include<math.h>
void main()
{
                int i,n;
                int t;
                int amount;
                scanf("%d",&n);
                int arr[12];
                int benfit;
                while(n--)
                {
                                t=0;
                                scanf(" %d",&amount);
                                for(i=0;i<12;i++)
                                scanf("%d",&arr[i]);
                                for(i=0;i<12;i++)
                                {
                                                if(arr[i]>arr[t]) t=i;
                                }
                                int k=0;
                                for(i=0;i<=t;i++)
                                {
                                                if(arr[i]<arr[k]) { if(ceil(amount/arr[i])==floor(amount/arr[i])) k=i;}
                                }
                                benfit=(amount/arr[k])*arr[t] -amount;
                                printf("%d  %d  %d\n",k+1,t+1,benfit);



                }
}
