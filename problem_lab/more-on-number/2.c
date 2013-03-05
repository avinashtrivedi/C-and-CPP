#include<stdio.h>
void main()
{
                int a[100]={0};
                int r,i,c;
                c=0;
                r=0;
                i=99;
                scanf("%d",a+99);
                while(1)
                {
                                c=(a[i]*a[99])+r;
                                if((c==a[99])&&(c/10==0)) break;
                                a[i-1]=c%10;
                                r=c/10;i-=1;

                }
                for(r=i;r<100;r++)printf("%d",a[r]);
}
