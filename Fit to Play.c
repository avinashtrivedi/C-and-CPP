#include<stdio.h>
int max(int *,int,int);
void main()
{
    int n,i,a;
    scanf("%d",&n);
    //int x[100000],y[100000],z[100000];
    while(n--)
    {
        scanf(" %d",&a);
        int x[a],y[a],z[a];
        for(i=0;i<a;i++)
        {
            scanf("%d",&x[i]);
        }
        for(i=0;i<a;i++)
        {
            max(x,i,a);
        }

    }
}
int max(int *arr,int a,int b)
{
    int i;
    for(i=a;i<b;i++)
    {
        if()
    }

}
