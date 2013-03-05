#include<stdio.h>
void bubble_sort(int *arr,int n)
{
    int i,j;
    int t;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}
int main()
{
    int n;// n is number of element;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
bubble_sort(arr,n);
for(i=0;i<n;printf("%d\n",arr[i++]));
}
