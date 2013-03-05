//selection sort coding date :: 6/8/2012::
//on code::block @vi
#include<stdio.h>
void selection(int *arr,int n)
{
    int i;int t,j;int temp;
    for(i=0;i<n-1;i++)
    {
        t=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[t]>arr[j])
            {
                t=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[t];
        arr[t]=temp;

    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    selection(arr,n);
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);

}
