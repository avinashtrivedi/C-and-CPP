#include<stdio.h>
int main()
{
    double i;
    printf("%d",(char *)(&i+1)-(char  *)(&i));
}
