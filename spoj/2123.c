#include<stdio.h>
int main()
{
    int i,n,t,a;
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)break;
        int arr[n];
        t=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            t+=arr[i];
        }
        a=0;
        if(t%n!=0)printf("-1\n");
        else
        {
            t=t/n;
            for(i=0;i<n;i++)
            if(arr[i]<t) a+=(t-arr[i]);
            printf("%d\n",a);
        }

    }
}
