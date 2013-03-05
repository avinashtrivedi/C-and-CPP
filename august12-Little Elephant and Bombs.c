#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,x;
    int t,k;
    while(n--)
    {
        scanf("%d ",&x);
        char s[x+1];
        int arr[x];
        for(k=0;k<x;k++) arr[k]=1;
        gets(s);
        k=0;
       // t=0;
        while(s[k]!='\0')
        {
            if(s[k]=='0'){k++;continue;}
            else if(s[k]=='1')
            {
                arr[k]=0;
                if(k!=0 && k!=(x-1)) arr[k-1]=arr[k+1]=0;
                if(k==0) arr[k+1]=0;
                if(k==x-1) arr[k-1]=0;
            }
            k++;
        }
        t=0;
        for(k=0;k<x;k++)
        if(arr[k]==1) t++;
        printf("%d\n",t);
    }
}
