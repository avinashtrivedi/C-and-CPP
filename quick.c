#include<stdio.h>
void quick_sort(int *arr,int from,int to)
{
    if(from>=to)return;
    int pivot=arr[from];
    int i,temp,j;
    i=from;
    for(j=from+1;j<=to;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }
    }
    temp=arr[i];
    arr[i]=arr[from];
    arr[from]=temp;
    /*recursive call to two smaller sub_array*/
    quick_sort(arr,from,i-1);
    quick_sort(arr,i+1,to);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    scanf("%d",arr+i);
    quick_sort(arr,0,n-1);
    for(i=0;i<n;printf("%d\n",*(arr+i++)));
}

