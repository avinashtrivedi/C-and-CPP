#include<stdio.h>
#include<string.h>
#define  ROW 4
#define COL 5
void main()
{
int **p;
int i,j;
p=(int **)malloc(ROW*sizeof(int *));
for(i=0;i<ROW;i++)
    {
        p[i]=(int *)malloc(COL*sizeof(int));
    }

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
             *(*(p+i) +j)=i;
            printf("%d\n",p[i][j]);
        }
        printf("\n");
    }
}
