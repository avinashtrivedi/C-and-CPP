#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
                char *arr[10];
                char n[20];
                char *b[3];
                char ch;
                //char c[10];
                char *p;
                int i;
                int j,len;
                for(i=0;i<5;i++)
                {
                scanf("%s",n);
                len=strlen(n);
                p=(char *)malloc(len+1);
                strcpy(p,n);
                arr[i]=p;
                }
                for(i=0;i<5;i++)
                printf("%s\n",arr[i]);
         /*****************************************************/
         for(i=0;i<3;)
         {
                         if((ch=getche())!='(')
                                             {j=0;

                                                //len=strlen(ch);
                                                //p=(char *)malloc(len+1);
                                                //strcpy(p,n);
                                                arr[i][j++]=ch;

                                             }
                                             else
                                             {
                                                             j=0;
                                                             while((ch=getche())!=')')
                                                             {
                                                                             arr[i][j++]=ch;
                                                             }

                                             }



         }


}
