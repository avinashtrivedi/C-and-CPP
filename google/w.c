#include<stdio.h>
void main()
{
int n,i;
char c[100];
printf("enter digits:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf(" %[^\n]s",c);
printf("%s\n",c);
}
}
