#include<stdio.h>
int func();
void main()
{
                int t,n;
                int s;
                scanf("%d",&n);
                s=func(n);
                if(s==9)
                printf("YES\n");
                else printf("NO\n");


}
int func(int t)
{
                int sum=0;
                while(t!=0)
                {
                                sum+=t%10;
                                t=t/10;
                }
                if(sum>9) func(sum);
                else return sum;
}
