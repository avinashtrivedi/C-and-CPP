#include<stdio.h>
int main()
{
    char n,t;
    while(1)
    {
        //scanf("%d",&n);
        n=getch();
        t=n;
        switch(t)
               {
                   case '1' :   {printf("A");break;}
                   case '11' : {printf("B");break;}
                   case '111' : {printf("C");break;}
               }
    }
}
