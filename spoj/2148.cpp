#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
     int i,t,a;
    char q;
    cin>>n;
    while(n--)
    {
        //getch();
        //scanf("%c",&q);
       cin>>a;
       unsigned long int arr[a];
        t=0;
        for(i=0;i<a;i++)
        {
        cin>>arr[i];
        t=(t+arr[i])%a;
        }
        if(t==0)
        printf("YES\n");
        else printf("NO\n");
    }
}
