#include<stdio.h>
#include<string.h>
int main()
{
                int n;
                int i;
                scanf("%d ",&n);
                char s[101];
                int a;
                for(i=1;i<=n;i++)
                {
                                gets(s);
                                a=strlen(s)-1;
                                if(s[a]=='a'||s[a]=='e'||s[a]=='o'||s[a]=='u'||s[a]=='i'||s[a]=='A'||s[a]=='E'||s[a]=='O'||s[a]=='U'||s[a]=='I')
                                printf("Case #%d: %s is ruled by a queen.\n",i,s);
                                else if(s[a]=='y'||s[a]=='Y')
                                printf("Case #%d: %s is ruled by nobody.\n",i,s);
                                else printf("Case #%d: %s is ruled by a king.\n",i,s);
                                //printf("%d\n",a);
                }
                return 0;
}
