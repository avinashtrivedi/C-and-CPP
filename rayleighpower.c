#include<stdio.h>
#include<conio.h>
void func();
void main()
{
func();

}
void func()
{
                int arr[3][3]={{2,-1,0},{-1,2,-1},{0,-1,2}};
                int x[3]={1,1,1};
                int i,j;
                int t;
                int y[3];
                for(i=0;i<3;i++)
                {     t=0;
                       for(j=0;j<3;j++)
                       {
                                 t=t+x[j]*(arr[i][j]);
                       }

                       y[i]=t;

                }

                for(i=0;i<3;i++)
                {
                                printf("\n%d",y[i]);
                }


}
