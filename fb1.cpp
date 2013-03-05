#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int t,ans;
char s[1010];
int main(){
  scanf("%d",&t);
  int y=1;
  while(t--){
    int cnt[26]={0};
    scanf(" %[^\n]",s);
    for(int i=0;s[i];i++)if(s[i]!=' ') ++cnt[s[i]-'A'];
    //ans=0;
   cnt['C'-'A']=cnt['C'-'A']/2;
   ans=min(cnt[0],min(cnt[2],min(cnt[4],min(cnt[7],min(cnt[10],min(cnt[15],min(cnt[17],cnt[20])))))));
    printf("Case #%d: %d\n",y++,ans);
  }
  return 0;
}
