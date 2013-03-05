#include<stdio.h>
int main()
{
    long int arr[101][101]={0};
    long int i,j;
    int t=0;
    for(i=0;i<=100;i++)
    arr[i][0]=1;
    for(i=1;i<=100;i++)
    {
        for(j=1;j<=i;j++)
        {
            arr[i][j]=arr[i-1][j-1] +arr[i-1][j];
            if(arr[i][j]>1000000)
            {
                arr[i][j]=1000000;
                t++;

            }
        }
    }
printf("%d",t);
}
