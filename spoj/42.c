#include<stdio.h>
int rev(int);
int main()
{
                int n;
                int t;
                int a,b;
                scanf("%d",&n);
                while((n--)>0)
                {
                scanf(" %d %d",&a,&b);
                t=rev(a)+rev(b);
                t=rev(t);
                printf("%d",t);
                //n--;
                }
                return 0;
}
int rev(int x)
{
         int a;
         int n,k=0;
         a=x;
         while(a!=0)
         {
              n=a%10;
              k=10*k +n;
              a=a/10;
         }
         return k;
}

