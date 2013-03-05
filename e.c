#include<stdio.h>
#include<math.h>
void main()
{
int i=0,m=1,k,v,y,c=0,a[10000],b[10000],n,tmp=1,t,flag=0;
//clrscr();
printf("\n Enter the number of the form 9,19,29,39....\n");
scanf("%d",&n);
k=n/10;
y=(n-1)/2;
v=k+1;
t=m;
if((n==49)||(n==289)||(n==2209)||(n==4489)||(n=9409))
y=(sqrt(n)*((sqrt(n)-1)))/2;
while(i<=y-1)
{
a[i]=t;
 c=m/10;
 m=m%10;
 if((c==0) && (tmp>1))
 m=t;
 m=m*v;
 t=m+c;
 if((t>9) && (tmp==1))
 {
  tmp+=1;
  t=m%10;
  i++;
  continue;
  }
if((a[i]==a[0])&&(i>2)&&(c==0))
{
flag=1;
break;
}
if((t>9)&&(tmp>1))
{
m=t;
t=t%10;
}
i++;
}
printf("\n");
i-=1;
n=i;
if(flag==1)
{
printf("\n After %d digits the same digits repeats",n+1);
printf("\n so answer(recurring decimal) is 0.");
for(i=n;i>=0;i--)
printf("%d",a[i]);
}
else
{
if(a[n]==9)
{
tmp=0;
for(i=n;i>=0;i--,tmp++)
b[tmp]=9-a[tmp];
printf("\n");
printf("\n\n so answer(recurring decimal) is 0.");
for(i=n;i>=0;i--)
printf("%d",b[i]);
for(i=n;i>=0;i--)
printf("%d",a[i]);

}
else
{
tmp=0;
for(i=n;i>=0;i--,tmp++)
b[tmp]=a[tmp];
printf("\n");
printf("\n\n so answer(recurring decimal) is 0.");
for(i=n;i>=0;i--)
printf("%d",b[i]);
for(i=n;i>=0;i--)
printf("%d",a[i]);
}
}
getch();
}
