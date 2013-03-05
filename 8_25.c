//vi-like editor:
//8/25/2012
#include<stdio.h>
#include<string.h>
void  main(int argc,char *argv[])
{
    FILE *fp;
    char ch;
    char s[4];
    fp=fopen(argv[1],"r+");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF) break;
        printf("%c",ch);
    }
    while(1)
    {
        ch=getche();
        /*if(strcmp(s,":w")==0){fclose(fp);fp=fopen(argv[1],"a");continue;}
        else if(strcmp(s,":q")==0)break;
        else if(strcmp(s,))
        fputs(s,fp);
        fputs("\n",fp);*/
        if(ch==27)
        {
            puts("\n\n");
            gets(s);
            if(strcmp(s,":w")==0){fclose(fp);}
            else if(strcmp(s,":q")==0){break;}
        }
        else if(ch=='\r'){ puts("\r");fputs("\n",fp);}
        else fputc(ch,fp);
    }
fclose(fp);
}
