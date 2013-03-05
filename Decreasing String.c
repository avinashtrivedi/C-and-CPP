#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,x;
    while(n--)
    {
        scanf("%d",&x);
        i=x%25;
        if(i)
        {
            for(j=i;j>=0;j--) printf("%c",'a'+j);
        }
        i=x/25;
        for(j=0;j<i;j++)
            printf("zyxwvutsrqponmlkjihgfedcba");
            printf("\n");
    }
}
