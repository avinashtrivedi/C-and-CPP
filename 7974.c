#include<stdio.h>
int main()
{
                int a,b,c;
                while(1)
                {
                                scanf("%d %d %d",&a,&b,&c);
                                if(a==0&&b==0&&c==0)return 0;
                                if(a+c==2*b)
                                printf("AP %d\n",2*c-b);
                                else printf("GP %d\n",c*b/a);

                }
                return 0;
}
