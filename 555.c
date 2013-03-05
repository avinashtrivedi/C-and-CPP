
#include<stdio.h>
#include<stdlib.h>
int lev=-1,n,val[50],a[50];
void main()
{
 int i,j;
 //clrscr();
 printf("Enter howmany numbers");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  val[i]=0;
  j=i+1;
  scanf("%d",&a[j]);
 }
 visit(0);
 getch();
}
visit(int k)
{
 int i;
 val[k]=++lev;
 if(lev==n)
 {
  for(i=0;i<n;i++)
  printf("%2d",a[val[i]]);
  printf("		");
 }
 for(i=0;i<n;i++)
 if(val[i]==0)
 visit(i);
 lev--;
 val[k]=0;
}
