#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int rotate(int x){
int r=log10(x);
int s=x%(int)pow(10,r);
s=s*10;
s+=x/pow(10,r);
if((int)log10(s)!=r)return x;
return s;
}
int main(){
int x,t,i,a,b,j,res;
scanf("%d",&t);

for(j=1;j<=t;j++){
scanf("%d %d",&a,&b);
res=0;
for(i=a;i<=b;i++){
x=i;
int l=ceil(log10(i));
while(--l>0){
x=rotate(x);
if(x>i&&x<=b){res++;}
}
}

printf("Case #%d: %d\n",j,res);
}

return 0;
}
