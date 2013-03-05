#include<iostream>
#include<algorithm>
#include <stdint.h>
int search(int *arr,int n,int data)
{
    int mid,low=0,high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==data) return 1;
        else if(arr[mid]>data) high=mid-1;
        else low=mid+1;
    }
    return 0;
}
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int s[n];
for(int i=0;i<n;i++)cin>>s[i];
sort(s,s+n);
int t=0;
for(int i=0;i<n;i++)
{
    int64_t y=s[i]*k;
    if(y>1000000000){t=t+(n-i);break;}
    if(s[i]*k>s[n-1]) {t=t+n-i;break;}
    if( !search(s,n,s[i]*k) ) t++;
//if(s[i]*k >=s[n-1]){t=t+(n-i-1);break;}
//if(s[i]*k>s[n-1]) {t=t+(n-i-1);break;}
}
cout<<t;
cout<<endl;
return 0;
}
