#include <iostream>
#include <algorithm>
#include <stdint.h>
#include <fstream>
#include <string>
#define MOD 1000000007
using namespace std;
int64_t fact[10001], invfact[10001]; //inverce fectorial
int64_t powmod(int base, int expo){
if(expo==0)
return 1;
else if(expo&1)
return (int64_t)base*powmod(base, expo-1)%MOD;
else{
int root=powmod(base, expo>>1);
return (int64_t)root*root%MOD;
}
}
int64_t inverse(int x){
return powmod(x, MOD-2);
}
void init(){
fact[0]=1;
for(int i=1; i<=10000; i++)
fact[i]=(int64_t)i*fact[i-1]%MOD;
invfact[10000]=inverse(fact[10000]);
for(int i=10000; i>0; i--)
invfact[i-1]=(int64_t)i*invfact[i]%MOD;
}
int64_t nCr(int n, int r){
if(r>n || r<0)
return 0;
return (int64_t)((int64_t)fact[n]*invfact[r]%MOD)*invfact[n-r]%MOD;
}
 
int main()
{
    init();
  //ifstream fin ("input.txt");
 //ofstream fout ("output.txt");
 int64_t t,n,k,count,sum=0,i,j;
 cin>>t;
 for( i=0;i<t;i++)
 {
     cin>>n>>k;
     sum=0;
     int64_t a[n];
     for(int j=0;j<n;j++)
     cin>>a[j];
 
     sort(a,a+n);
     count=n-1;
     
     for( j=n-1;j>=k-1;j--)
     {
         sum+=(nCr(count,k-1)*a[j])%MOD;
         count--;
     }
     sum=sum%MOD;
     cout<<"Case #"<<(i+1)<<": "<<sum<<endl;
 }
 return 0;
}