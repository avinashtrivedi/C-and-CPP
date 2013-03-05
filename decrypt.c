#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void func(int t)
{
     switch(t)
     {
      case 2:printf("a");break;
      case 22:printf("b");break;
      case 222:printf("c");break;
      case 3:printf("d");break;
      case 33:printf("e");break;
      case 333:printf("f");break;
      case 4:printf("g");break;
      case 44:printf("h");break;
      case 444:printf("i");break;
      case 5:printf("j");break;
      case 55:printf("k");break;
      case 555:printf("l");break;
      case 6:printf("m");break;
      case 66:printf("n");break;
      case 666:printf("o");break;
      case 7:printf("p");break;
      case 77:printf("q");break;
      case 777:printf("r");break;
      case 7777:printf("s");break;
      case 8:printf("t");break;
      case 88:printf("u");break;
      case 888:printf("v");break;
      case 9:printf("w");break;
      case 99:printf("x");break;
      case 999:printf("y");break;
      case 9999:printf("z");break;

     }
}
int main()
{
    char s[100000];
    gets(s);
    int t=0;
    int x,y,z,c;
    while(s[t]!='\0')
    {
                     if(s[t]=='_'){t++;continue;}
                     if(s[t]==' '){printf(" ");t++;continue;}
       x=s[t]-48;y=s[t+1]-48;
       if(x==y)
       {
               z=s[t+2]-48;
               if(x==z)
               {
                        if(s[t+3]!='\0')
                        c=s[t+3] -48;
                        else
                        {
                            func(x*111);
                            t=t+3;continue;
                        }
                        if(x==c)
                        {
                       func(x*1111);
                       t=t+4;
                        }
                        else
                        {
                            func(x*111);
                            t=t+3;
                        }
               }
               else
               {
                   func(x*11);
                   t=t+2;
               }
       }
       else
       {
           func(x);
           t=t+1;
       }

    }
    getch();
 return 1;
}
