// binary search (faster than linear search) works on sorted array........
#include<stdio.h>
int binary_search(int *arr,int n,int data)
{
    int mid,low=0,high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==data) return mid+1;
        else if(arr[mid]>data) high=mid-1;
        else low=mid+1;
    }
}
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int data;
    printf("enter content you are searching for::\n");
    scanf("%d",&data);
    int k;
    k=binary_search(arr,n,data);
    printf("number is at location ::%d",k);
}
