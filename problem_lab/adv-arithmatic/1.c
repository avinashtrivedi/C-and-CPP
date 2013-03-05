#include<stdio.h>
#include<string.h>
void main()
{
                char a[10];
                char b[10];
                int k;
                int i;
                scanf("%s %s",a,b);
               char c[11];
               // printf("%c\t%c",a,b);
                int t,r=0;
                for(i=4;i>=0;i--)
                {
                         t=a[i] -'0' +b[i]-'0' +r;
                        //if(i==0) {c[0]=t; break;}
                         c[i]=(char)(t%10 +'0');
                         r=t/10 ;
                }
                for(i=0;i<=10;i++)
             printf("%c",c[i]);

}

