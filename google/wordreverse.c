#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 void main()
{
                char *arr[1001];
                char n[50];
                char t,*p;
                int len,i;
                int k,r;
                scanf("%d",&k);
                for(r=1;r<=k;r++)
                { i=0;
                while( scanf("%s%c",n,&t)!=EOF)
                {
                                //fgets(n,100,stdin);
                                len=strlen(n);
                                p=(char *)malloc(len+1);
                                strcpy(p,n);
                                arr[i]=p;
                                if(t=='\n')break;
                                i++;
                }
                printf("Case #%d: ",r);
               while(i>=0)
               {
                printf("%s ",arr[i--]);
               }
               printf("\n");
                }

}
