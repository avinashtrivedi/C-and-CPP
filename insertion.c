#include<stdio.h>
void insertion(int *arr,int n)
{
   int t,i,x;
   for(i=1;i<n;i++)
   {
       t=arr[i];
       x=i-1;
       while(x>=0 && arr[x]>t)
       {
           arr[x+1]=arr[x];
           x--;
       }
       arr[x+1]=t;
   }
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    insertion(arr,n);
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
}
