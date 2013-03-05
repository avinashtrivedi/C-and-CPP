#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char ch='y';
    struct emp
    {
        char name[45];
        int age;
        float bs;
    } e;
    fp=fopen("b.txt","r");
    while( fscanf(fp,"%s %d %f",e.name,&e.age,&e.bs)!=EOF)
    {
            printf("%s %d %f\n",e.name,e.age,e.bs);
    }
fclose(fp);
}
