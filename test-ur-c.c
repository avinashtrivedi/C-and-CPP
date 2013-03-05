#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int t=1,r=100;
int k;
void fun();
int main()
{
(t==101) ?printf("%d\n",r--) : printf("%d\n",t++);
k=r>0;
(k==0)? fun() : printf("");
main();
}
void fun()
{
abort();
}
