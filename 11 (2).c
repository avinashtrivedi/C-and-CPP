#include<stdio.h>
void main()
{
    char s[]="%d";
    char a;
    s[1]='c';
    scanf(s,&a);
    printf(s,a);
}
