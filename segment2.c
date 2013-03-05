#include<stdio.h>
#include<math.h>
/*void func(int n)
{
    n&1? puts("NO"):puts("YES");
}*/
int main()
{

 int n;
 scanf("%d",&n);
printf("%s\n",(int)fmod((float)n,(float)2) ? "odd":"even");
 /*
 while(n--)
 {#
     int k;
     scanf("%d",&k);
     func(k);
 }*/
}
