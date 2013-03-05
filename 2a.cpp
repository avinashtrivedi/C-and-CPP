#include<iostream>
<<<<<<< HEAD
<<<<<<< HEAD
#include<math.h>
using namespace std;
int main()
{
int64_t x1,i,n,y1;
cin>>n;
x1=sqrt(n);
for(i=1;i<=x1;i++)
{
    if(n/i - i>=1)
    {
        y1=n/i;
        /*--------------------------*/
        int k,y,sum=0;
        k=i;
     while(k!=0)
    {
        y=k%10;
        k=k/10;
        sum+=y;
    }
    //cout<<sum<<endl;
        /*------------------------------*/
        if(y1==i+sum)
        {cout<<i<<endl;return 0;}

    }
}
cout<<"-1"<<endl;
return 0;
}
=======
=======
>>>>>>> e068ead54eba246a19b88d15506be8efa8fb73bf
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
<<<<<<< HEAD
}
>>>>>>> e068ead54eba246a19b88d15506be8efa8fb73bf
=======
}
>>>>>>> e068ead54eba246a19b88d15506be8efa8fb73bf
