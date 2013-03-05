#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&k);
        int i;
        int t;
        int arr[1000]={0};
        for(i=0;i<k;i++)
        {
            scanf("%d",&t);
            arr[t]+=1;
        }
        for(i=0;i<k;i++)
        {
            scanf("%d",&t);
            arr[t]+=(-1);
        }
        int count=0;
        int max=0;
        for(i=0;i<1000;i++)
        {
            count+=arr[i];
            if(count>max)
            max=count;
        }
        printf("%d\n",max);

    }
    return 0;
}
