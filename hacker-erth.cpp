#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int t,x=0;
int sum=0;
cin>>t;
int a,b;
while(t--)
{
char s[10002];
cin>>s;
cin>>a>>b;
int y=strlen(s);
int n=y-1;
if(y%2 !=0 && s[y/2]=='/')sum+=min(a,b);
y=y/2;
for(int i=0;i<y;i++)
{
    if(s[i]=='/' && s[n-i]=='/'){sum+=2*min(a,b);continue;}
if(s[i]!=s[n-i])
{
    if(s[i]=='/' || s[n-i]=='/'){if(s[i]=='a' || s[n-i]=='a') sum+=a; else if(s[i]=='b' || s[n-i]=='b') sum+=b;}
    else {x=1;break;}
}
}
if(x==1)cout<<"-1"<<endl;
else cout<<sum<<endl;
}
return 0;
}
