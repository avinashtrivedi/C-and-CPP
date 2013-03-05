#include<stdio.h>
#include<conio.h>
#include<string.h>
int d,r;
void func(char *,int );
int main()
{

   int n;
   char q[10];
    //d=0;
    gets(q);
    n=atoi(q);
    char s[100];
    int a[100]={0};
     //n=3;
    int t;
   int i;
   for(d=1;d<=n;d++)
   {
    gets(s);
    t=i=0;

      while(s[i]!='\0')
      {
                      if(s[i]==' ') {a[t]=i+1;t++;}
                      i++;
      }
      if(t==0) printf("%s\n",s);
      else
      {
      for(i=t-1,r=1;i>=0;i--)
                      func(s,a[i]);
      i=0;
      while(s[i]!=' ')
      printf("%c",s[i++]);
      printf("\n");
      //return 0;
      //d++;//return 0;
      }
   }
   }
void func(char *b,int c)
{
                if(r==1)
                { r=2;
                         printf("case #%d:",d);
                                while(b[c]!='\0')
                                {
                                                printf("%c",b[c++]);
                                }

                }
                else
                {
                                printf("case #%d:",d);
                                while(b[c]!=' ')
                                {
                                                printf("%c",b[c++]);
                                }

                }
                 printf(" ");

}

