#include<stdio.h>
int main()
{
    int a[2][2]={{1,2},{3,4}};
    int *b;
    b=a;
    int i;
    for(i=0;i<4;i++)
    printf("%d ",b[i]);

}
