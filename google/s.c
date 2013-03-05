#include<stdio.h>
#include<string.h>
int main()
{
char arr[]={'y','h','e','s','o','c','v','x','d','u','i','g','l','b','k','r','z','t','n','w','j','p','f','m','a','q'};
char s[103];
int i,k,n;
scanf("%d",&n);
for(k=1;k<=n;k++)
{
scanf(" %[^\n]",s);
for(i=0;i<strlen(s);i++)
{
if(s[i]!=' ')
s[i]=arr[s[i]-'a'];
}
printf("Case #%d: %s\n",k,s);
}
}
