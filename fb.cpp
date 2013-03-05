#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
 using namespace std;
 int main()
{
int x,m;
x=1;
scanf("%d\n", &m);
while(m--)
{
    char s[505];
    gets(s);
    int t=strlen(s);
    vector<int> arr(26);
    for(int i=0;i<t;i++)
    {
        if(s[i]>=65 && s[i]<=90)arr[s[i]-'A']++;
        else if(s[i]>=97 && s[i]<=122) arr[s[i]-'a']++;
    }
    sort(arr.begin(), arr.end(), std::greater<int>());
    int val=26;
    int sum=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]==0) break;
        sum+=arr[i]*val;
        val--;
    }
 cout<<"Case #"<<x++<<": "<<sum<<endl;
}
return 0;
}
