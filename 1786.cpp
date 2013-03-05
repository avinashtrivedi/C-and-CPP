#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
 int i,j,n;
 int sum;
 char s[5];

 while(cin>>s,strcmp(s,"00e0")!=0)
 {
  sum=0;
  i=0;
  while(s[i]!='e')
  {
   sum=sum*10+s[i]-'0';
   i++;
  }
  sum*=((int)pow(float(10),float(s[i+1]-'0')));

  n=sum;
//cout<<n;
  i=0;
  while((1<<i)<=n) i++;
  i--;

  int l=n-(1<<(i));
  cout<<2*l+1<<endl;
 }
 return 0;
}
