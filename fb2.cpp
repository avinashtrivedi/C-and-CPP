#include<cstdio>
int t,nr=1,ans;
char s[1010];
int main(){
  scanf("%d",&t);
  while(t--){
    int cnt[26]={};
    scanf(" %[^\n]",s);
    for(int i=0;s[i];i++)if(s[i]!=' ')++cnt[s[i]-'A'];
    ans=0;
    char t[30]="HACKERCUP";
    while(1){
      bool ok=true;
      for(int i=0;t[i];i++)ok&=cnt[t[i]-'A']-->0;
      if(!ok)break;
      ++ans;
    }
    printf("Case #%d: %d\n",nr++,ans);
  }
}
