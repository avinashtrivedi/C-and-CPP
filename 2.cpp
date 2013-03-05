#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<cstdio>
#include<set>
#include<map>
#include<ctime>
using namespace std;
int main()
{
	/*freopen("bsinp.txt","r",stdin);
	freopen("bsout.txt","w",stdout);*/
	int n;
	cin>>n;
	while(n--)
	{
		char s[205];
		cin>>s;
		int a[26]={0};
		int b[26]={0};
		int t=0;
		for(int i=0;s[i];i++)
		{
			if(s[i]>=65 && s[i]<=90)b[s[i]-'A']++;
			if(s[i]>=97 && s[i]<=122)a[s[i]-'a']++;

		}
        for(int i=0;i<26;i++)
        {
        	t=t+(a[i]/2 + a[i]% 2) +(b[i]/2 + b[i]%2);

        }	
        cout<<t<<endl;	
	}
	return 0;
}