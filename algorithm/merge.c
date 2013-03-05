///merge sort................
#include<stdio.h>
void mergesort(int *,int,int);
void merge(int *,int,int,int);
int main()
{
                int n;
                printf("enter number of element:");
                scanf("%d",&n);
                int arr[n];
                int i;
                for(i=0;i<n;i++)
                scanf("%d",&arr[i]);
                mergesort(arr,0,n-1);
                for(i=0;i<n;i++)
                printf("%d  ",arr[i]);
                return 0;
}
void mergesort(int *arr,int left,int right)
{
                int mid;
                mid=(left+right)/2;
                if(left<right)
                {
                                mergesort(arr,left,mid);
                                mergesort(arr,mid+1,right);
                                merge(arr,left,mid,right);
                }

}
void merge(int *arr,int left,int mid,int right)
{
                int temparr[left-right+1];
                int pos=0;
                int lpos,rpos;
                lpos=left;rpos=mid+1;
                while(lpos <= mid && rpos <= right)
                {
                                if(arr[lpos] < arr[rpos])
                                {
                                temparr[pos++] = arr[lpos++];
                                }
                                else
                                {
                                temparr[pos++] = arr[rpos++];
                                }
                }
        while(lpos <= mid)  temparr[pos++] = arr[lpos++];
        while(rpos <= right)temparr[pos++] = arr[rpos++];
        int iter;
        for(iter = 0;iter < pos; iter++)     ///copy back temparr to original array........
        {
                arr[iter+left] = temparr[iter];
        }
}


