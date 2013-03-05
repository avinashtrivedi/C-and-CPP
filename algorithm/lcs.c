///longest common subsequence..................
#include<stdio.h>
#include<string.h>
int max(int,int);
int longest_common_sequence();
int main()
{
                char s[100];
                char t[100];
                scanf("%s%s",s,t);
                printf("\n%d\n",longest_common_sequence(s,t));
}
int max(int a,int b)
{
    return a>b? a:b ;
}
int longest_common_sequence(char x[],char y[])
{
                int slen=strlen(x);
                int tlen=strlen(y);
                int i,j;
                int common[slen+1][tlen+1];
                for(i=slen;i>=1;i--)
                x[i]=x[i-1];
                for(j=tlen;j>=1;j--)
                y[j]=y[j-1];
                for(i=0;i<=slen;i++) common[i][0]=0;
                for(i=0;i<=tlen;i++) common[0][i]=0;
                for(i=1;i<=slen;i++)
                {
                                for(j=1;j<=tlen;j++)
                                {
                                                if(x[i]==y[j]) {common[i][j]=common[i-1][j-1] + 1;}
                                                else {common[i][j]=max(common[i][j-1],common[i-1][j]);}
                                                printf("%d ",common[i][j]);
                                }
                                printf("\n");
                }
                return common[slen][tlen];
}

