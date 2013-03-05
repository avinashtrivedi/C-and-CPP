#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include<iostream>
using namespace std;
int main(){
int i,k,j,z1,z2,n,dem,t,test,z,x[700][700];char a[700][700];
cin>>test;
for (z=1;z<=test;z++){
cin>>n;
for (i=1;i<=n;i++) for (j=1;j<=n;j++) cin>>a[i][j];
for (i=0;i<=n+1;i++) {a[i][0]='.';a[i][n+1]='.';a[0][i]='.';a[n+1][i]='.';}
for (i=1;i<=n;i++) for (j=1;j<=n;j++) {
    if (a[i][j]=='#'){
       if (a[i-1][j]=='#') x[i][j]++;
       if (a[i+1][j]=='#') x[i][j]++;
       if (a[i][j-1]=='#') x[i][j]++;
       if (a[i][j+1]=='#') x[i][j]++;
    }
}
dem=0;
for (k=1;k<=4;k++)
for (i=1;i<=n;i++)
for (j=1;j<=n;j++)
    if (x[i][j]==k&&a[i][j]=='#') {
       t=5;
       if (a[i-1][j]=='#'&&x[i-1][j]<t) {t=x[i-1][j];z1=i-1;z2=j;}
       if (a[i+1][j]=='#'&&x[i-1][j]<t) {t=x[i+1][j];z1=i+1;z2=j;}
       if (a[i][j-1]=='#'&&x[i-1][j]<t) {t=x[i][j-1];z1=i;z2=j-1;}
       if (a[i][j+1]=='#'&&x[i-1][j]<t) {t=x[i][j+1];z1=i;z2=j+1;}
    if (t<5) {dem++;a[i][j]='.';a[z1][z2]='.';}
    }
cout<<"Case "<<z<<":"<<dem<<'\n';
}
}
