#include<stdio.h>
void main()
{
                int i,n;
                int t,c,l;
                int k;
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                {
                                scanf("%d%d",&c,&l);
                                t=0;
                                int a[l];
                                while(t<l)
                                {
                                                scanf("%d",&a[t]);
                                                t++;
                                }
                                for(t=0;t<l-1;t++)
                                {
                                                for(k=t+1;k<l;k++)
                                                {
                                                                if(a[t]+a[k]==c) printf("case #%d: %d %d",i,t+1,k+1);
                                                }
                                }

                }
}
