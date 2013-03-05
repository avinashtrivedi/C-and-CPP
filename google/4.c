#include<stdio.h>
#include<conio.h>
int key=1;
void func();
int main()
{
                int p,n;
               // scanf("%d",&n);
                //for(p=1;p<=3;p++)
                {
                                //printf("case #%d: ",p);
                    func();
                }
                getch();
return 0;
}
void func()
{
                int w;
                char s[1001];
                //printf("h");
                //scanf("%d",&n);
                //for(w=1;w<=n;w++)
                 gets(s);
                //scanf("%[^\n]s",s);
                //printf("o");
                int i=0;
                //printf("\ncase%d",w);
                while(s[i]!='\0')
                {
                                if(s[i]==' ')
                                { if(key==0)
                                  printf(" ");printf("0");
                                  key=0;
                                }
                                else if(s[i]>='a'&&s[i]<='c')
                                {
                                                if(key==2) printf("_");
                                                key=2;

                                                switch(s[i])
                                                {
                                                                case 'a': printf("2");break;
                                                                case 'b':printf("22");break;
                                                                case 'c':printf("222");break;

                                                }
                                }

                                 else if(s[i]>='d'&&s[i]<='f')
                                {
                                                 if(key==3) printf("_");
                                                key=3;

                                                switch(s[i])
                                                {
                                                                case 'd': printf("3");break;
                                                                case 'e':printf("33");break;
                                                                case 'f':printf("333");break;

                                                }
                                }
                                 else if(s[i]>='g'&&s[i]<='i')
                                {

                                                 if(key==4) printf("_");
                                                key=4;

                                                switch(s[i])
                                                {
                                                                case 'g': printf("4");break;
                                                                case 'h':printf("44");break;
                                                                case 'i':printf("444");break;

                                                }
                                }
                                else  if(s[i]>='j'&&s[i]<='l')
                                {
                                                 if(key==5) printf("_");
                                                key=5;

                                                switch(s[i])
                                                {
                                                                case 'j': printf("5");break;
                                                                case 'k':printf("55");break;
                                                                case 'l':printf("555");break;

                                                }
                                }
                                else  if(s[i]>='m'&&s[i]<='o')
                                {
                                                 if(key==6) printf("_");
                                                key=6;

                                                switch(s[i])
                                                {
                                                                case 'm': printf("6");break;
                                                                case 'n':printf("66");break;
                                                                case 'o':printf("666");break;

                                                }
                                }
                                else  if(s[i]>='p'&&s[i]<='s')
                                {
                                                 if(key==7) printf("_");
                                                key=7;

                                                switch(s[i])
                                                {
                                                                case 'p': printf("7");break;
                                                                case 'q':printf("77");break;
                                                                case 'r':printf("777");break;
                                                                case 's':printf("7777");break;

                                                }
                                }
                                else  if(s[i]>='t'&&s[i]<='v')
                                {
                                                 if(key==8) printf("_");
                                                key=8;

                                                switch(s[i])
                                                {
                                                                case 't': printf("8");break;
                                                                case 'u':printf("88");break;
                                                                case 'v':printf("888");break;

                                                }
                                }
                                else  if(s[i]>='w'&&s[i]<='z')
                                {
                                                 if(key==9) printf("_");
                                                key=9;

                                                switch(s[i])
                                                {
                                                                case 'w': printf("9");break;
                                                                case 'x':printf("99");break;
                                                                case 'y':printf("999");break;
                                                                case 'z':printf("9999");break;

                                                }
                                }

//////////////////////////////////////////////***********************///////////////////////////
i++;
                }
                printf("\n");

                }


