//microsoft qn  rotate array of n*n by 90 degree.
#include<stdio.h>
void main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int brr[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            brr[i][j]=arr[j][2-i];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
}
