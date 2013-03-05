#include <stdio.h>
#include <iostream>
#include <stdint.h>
#include <algorithm>
using namespace std;
long long mdd=1000000007; 
int main()
{
    int64_t n,k;
    int t;
    int tt=1;
        int64_t i,sum,fact;
        sum=0;
        scanf("%d",&t);
        while(t--)
        {       
                cin>>n>>k;
                int64_t arr[n];
                fact=1;
                for(i=0;i<n;i++)
                cin>>arr[i];
                sort(arr,arr+n);
                sum=arr[k-1];
                for(i=k;i<n;i++)
                {
                        fact=(fact*i)% mdd;
                        fact=fact/(i-k+1);
                        sum=(sum+(fact*arr[i])% mdd)% mdd;
                }
                sum=sum%mdd;
                cout<<"Case #"<<tt++<<": "<<sum<<endl;
        }
        return 0;
}
