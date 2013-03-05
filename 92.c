//project euler problem 92.....m@fi@....
#include<stdio.h>
long int count=0;
long int p;
int func(long int);
int main()
{
    long int i,x;
    int j,k,y;
    for(i=10000000;i>0;i--)
    {
        if(func(i))count++;
        printf("%d\n",count);
    }
    printf("%d",count);
}
int func(long int a)
{
    int k,y,q;
        p=a;q=0;
        int arr[10]={0};
        while(p!=0)
        {
            arr[q]=p%10;
            p=p/10;
            q++;
        }
        y=0;
        for(k=0;k<q;k++)
        y+=(arr[k]*arr[k]);
        if(y==89){return 1;}
        else if(y==1) return 0;
        else return func(y);
}
