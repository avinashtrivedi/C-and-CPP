#include<stdio.h>
int binary_search(int *,int,int);
int main()
{
int n;
int i;
printf("enter number of element:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
int key;
int index;
printf("enter KEY to search for::");
scanf("%d",&key);
index=binary_search(arr,n,key);
if(index==-1)printf("element not found");
else printf("element is at %d location",index);
return 0;
}
int binary_search(int *arr,int n,int key)
{
                int left = 0, right= n-1, mid;
        while(left<= right)
        {
                mid = (left + right)/2;
                if(arr[mid] ==key)
                {
                        return mid;
                }
                else if(arr[mid] <key)
                {
                       left=mid+1;
                }
                else if(arr[mid] > key)
                {
                        right = mid-1;
                }

        }
        return -1;

}
