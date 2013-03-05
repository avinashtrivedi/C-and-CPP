#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
     char s[101];
     char *p;
     char a='_';
     int t;
     while(1)
     {
             gets(s);
             p=strchr(s,a);
           // printf("%d ",p-s);
               int i=0;t=0;
               while(s[i]!='\0')
               {
                                if(s[i]>='A'&&s[i]<='Z'){t=1;break;}
                                i++;
               }
             //if(t==1)printf("java");
             if(p==NULL && t!=1) printf("%s\n",s);
             else if(p!=NULL && t!=1)
             {
                  i=0;
                  while(s[i]!='\0')
                  {
                       if(s[i]=='_'){i++;printf("%c",toupper(s[i]));i++;continue;}
                       printf("%c",s[i]);
                       i++;            
                  }
                  printf("\n");
             }
             else if(p==NULL && t==1)
             {
                  i=0;
                  while(s[i]!='\0')
                  {
                       if(s[i]>='A'&&s[i]<='Z'){printf("_%c",tlower(s[i]));i++;continue;}
                       printf("%c",s[i]);
                       i++;            
                  }
                  printf("\n");
             }
             else 
             printf("Error!\n");
     }
     
}
