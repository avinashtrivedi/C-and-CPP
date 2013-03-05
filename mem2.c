#include<stdio.h>
#define row 4
#define col 3
int main()
{
    /*int (*p)[15];
    p=(int (*)[15])malloc(row*sizeof(*p));
    printf("%d",sizeof(p));*/
    int **p;
    int i,j;
    p=(int **)malloc(row*sizeof(int *));
    printf("%d\n\n\n\n",sizeof(p));
    p[0]=(int *)malloc(row*col*sizeof(int));
    for(i=0;i<row;i++)
    p[i]=p[0]+i*col;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            p[i][j]=i;
            printf("%d\n",p[i][j]);
        }
        printf("\n");
    }
}
