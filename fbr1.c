#include<cstdio>
#include<algorithm>
#include<string.h>

using namespace std;

char str[550];
int alpha[26];

int main()
{
	freopen("bsinp.txt","r",stdin);
	freopen("bsout.txt","w",stdout);
	int n, len, i, out, c;
	c = 1;
	scanf("%d", &n);
	gets(str);
	while(n--)
	{
		gets(str);
		len = strlen(str);
		for(i=0; i<26; ++i)
		{
			alpha[i] = 0;
		}
		for(i=0; i<len; ++i)
		{
			if( (str[i] >= 'A') && (str[i] <= 'Z') )
			{
				alpha[str[i]-65]++;
			}
			else if( (str[i] >= 'a') && (str[i] <= 'z') )
			{
				alpha[str[i]-97]++;
			}
		}
		sort(alpha, alpha+26);
		out = 0;
		for(i=25; i>=0; --i)
		{
			out += alpha[i]*(i+1);
		}
		printf("Case #%d: %d\n", c, out);
		++c;
	}
}