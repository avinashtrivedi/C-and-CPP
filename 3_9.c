#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    printf("enter type\n");
    scanf("%s",s);
    if(strcmp(s,"float")==0)
    {char w[]="%f";
    float t;
    scanf(w,&t);
    printf(w,t);
    }
}
