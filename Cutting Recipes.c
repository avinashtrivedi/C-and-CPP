#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}
void main()
{
    int n,a;
    scanf("%d ",&n);
    int arr[55];
    while(n--)
    {
        scanf("%d ",&a);
        int i;
        for(i=0;i<a;i++)
        scanf("%d",&arr[i]);
        int xgcd=gcd(arr[0],arr[1]);
        for(i=2;i<a;i++)
        {
            xgcd=gcd(xgcd,arr[i]);
        }
        for(i=0;i<a;i++)
            {
                printf("%d ",arr[i]/xgcd);
            }
            printf("\n");
    }
}
