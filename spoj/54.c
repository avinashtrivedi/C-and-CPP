#include<stdio.h>
int main()
{
   // int a,b;
    char a[101];
    char b[101];
    int i;
    //while(i--)
    //{
    char t;
    for(i=0;;i++)
    {
        scanf("%s%c",&a[i],&t);
        if(t=='\n') break;
    }
    t='a';
    for(i=0;;i++)
    {
        scanf("%s%c",&b[i],&t);
        if(t=='\n') break;
    }

        //scanf("%s",b);

        printf("\n\n\n");
        printf("%s",b);
        //printf("%d\n%d\n",(a+b)/2,(a-b)/2);
    //}
}
