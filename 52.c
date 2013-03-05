#include<stdio.h>
#include<math.h>
int call(unsigned long int);
int no_digit(unsigned long int);
int main()
{
    unsigned long int i,j;
    int arr[10];
    int brr[10];
    int c;
    int g;
    for(i=1;;i++)
    {
        c=no_digit(i);
        if(c==no_digit(2*i)&&c==no_digit(3*i)&&c==no_digit(4*i)&&c==no_digit(5*i)&&c==no_digit(6*i))
        {
            g=call(i);
            if(g==1)break;
        }
    }
}
int no_digit(unsigned long int a)
{
    if(a==10) return 2;
    else if(a==100) return 3;
    else if(a==1000) return 4;
    else if(a==10000) return 5;
    else if(a==100000) return 6;
    else if(a==1000000) return 7;
    else return(ceil(log10(a)));
}
int call(unsigned long int b)
{
    int p[10]={0};
    int q[10]={0};
    int r[10]={0};
    int s[10]={0};
    int t1[10]={0};
    int u[10]={0};
    int c;
    int count=0;
    int i;
    unsigned long int t=b;
    while(t!=0)
    {
        c=t%10;
        p[c]++;
        t=t/10;
    }
  t=2*b;
  while(t!=0)
    {
        c=t%10;
        q[c]++;
        t=t/10;
    }
    t=3*b;
  while(t!=0)
    {
        c=t%10;
        r[c]++;
        t=t/10;
    }
    t=4*b;
  while(t!=0)
    {
        c=t%10;
        s[c]++;
        t=t/10;
    }
    t=5*b;
  while(t!=0)
    {
        c=t%10;
        t1[c]++;
        t=t/10;
    }
    t=6*b;
  while(t!=0)
    {
        c=t%10;
        u[c]++;
        t=t/10;
    }
for(i=0;i<10;i++)
{
    if(p[i]==q[i]&&q[i]==r[i]&&r[i]==s[i]&&s[i]==t1[i]&&s[i]==u[i])count++;
}
if(count==10)
{
    printf("%d",b); return 1;
}
return 0;
}
