#include<stdio.h>
void merge_sort(int *,int ,int );
void merge(int *,int ,int,int);
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    merge_sort(arr,0,n-1);
    for(i= 0;i< n; i++)
    printf("%d\n",arr[i]);
    return;

}
void merge_sort(int *arr,int left,int right)
{
    if(left<right)
    {
        int mid=(left+right)/2;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
void merge(int *arr,int left,int mid,int right)
{
    int temp[right-left+1];
    int pos=0,lpos=left,rpos=mid+1;
    while(lpos<=left && rpos<=right)
    {
        if(arr[lpos]<=arr[rpos])
            temp[pos++]=arr[lpos++];
        else
        temp[pos++]=arr[rpos++];
    }
    while(lpos<=mid) temp[pos++]=arr[lpos++];
    while(rpos<=right) temp[pos++]=arr[rpos++];
    int iter;
    for(iter = 0;iter < pos; iter++)
                arr[iter+left] = temp[iter];
}
