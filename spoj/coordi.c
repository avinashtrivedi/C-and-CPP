#include<stdio.h>
void main()
{
    int n;
    int x,y;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&x,&y);
        if(x%2==0&&(y==x||y==x-2)) printf("%d\n",x+y);
        else if(x%2!=0&&(y==x||y==x-2)) printf("%d\n",x+y-1);
        else printf("No Number\n");

    }
}
