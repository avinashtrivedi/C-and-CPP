#include<stdio.h>
#include<string.h>
void main()
{
    int n;
    scanf("%d ",&n);
    char buf[1000];
    int i,len,price;
    int x=0;
    while(n--)
    {
        gets(buf);
        len=strlen(buf);
        for(i=len-1;i>0;i--) if(buf[i]==' ') break;
        price = atoi(buf+i+1);
        int t,k=price;
        int arr[4]={0};
        arr[3]=0;
        while(k!=0)
        {
            t=k%10;k=k/10;
            if(t==8)arr[0]+=1;
            else if(t==5)arr[1]+=1;
            else if(t==3)arr[2]+=1;
            else{ arr[3]=1;break;}
        }
        if(arr[3]!=1 && arr[0]>=arr[1] && arr[1]>=arr[2])x++;
        //printf("%d\n",price);
    }
    printf("%d\n",x);
}
