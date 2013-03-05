#include<stdio.h>
#include<string.h>
void main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n+1];
    char s[10];
    int a,i,r;
    for(i=0;i<n+1;i++)arr[i]=0;
    while(k--)
    {
        scanf(" %s",s);
        if(!strcmp(s,"CLICK"))
        {
            scanf("%d",&a);
            if(arr[a]==0) arr[a]=1;
            else arr[a]=0;
        }
        else
        {
            for(i=0;i<n+1;i++)arr[i]=0;
        }
        r=0;
        for(i=0;i<n+1;i++)
        if(arr[i]==1)r++;
        printf("%d\n",r);
    }
}
