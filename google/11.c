//End a C program with the enter key..............
#include<stdio.h>
void main()
{
char number[20];
char nl ;
int counter=0;
while (scanf("%s%c", number, &nl) != EOF)
{

   if (nl == '\n')
     break;
}
}
