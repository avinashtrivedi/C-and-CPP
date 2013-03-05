#include<stdio.h>
void main()
{
     int n;
     int t,i,a;
     char s[86];
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
                      scanf("%d ",&a);
                      gets(s);
                      printf("%d ",i);
                      t=0;
                      while(s[t]!='\0')
                      {
                                       if(t+1==a){t++;continue;}
                                       printf("%c",s[t]);
                                       t++;
                             
                      }
                      printf("\n");
                      
     }                  
                      
     
}
