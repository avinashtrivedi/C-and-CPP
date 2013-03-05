#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[1001];
    int l;
    while(n--)
    {
        scanf("%s",s);
        int t=2;
        int j,i=s[0]-97;
        l=strlen(s);
        for(j=1;j<l;j++)
        {
            if((int)s[j]-97<i){ t=t+(25-i)+(int)s[j] -96 +1;i=(int)s[j]-97;}
            else if((int)s[j]-97 >i){t=t+(int)s[j]-97-i+1;i=(int)s[j]-97;}
            else {t=t+1;}
        }
        if(t<=11*l) printf("YES\n");
        else printf("NO\n");
     }
}
