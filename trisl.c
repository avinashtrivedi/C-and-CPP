#include<stdio.h>
#include<conio.h>

void main()
{
int f,arr[3][3]={{1,6,1},{1,2,0},{0,0,3}};
float m[3]={1,0,0};
float n[3]={0,0,0};
int i,j,l;
float grtr=0.0,temp=0.1;




for(  i=0;i<=2;i++)
{

for( j=0;j<=2;j++)
{

n[i]= n[i] + arr[i][j]*m[j];

	 }
}

for(l=0;l<=2;l++)
{
   printf("%f",n[i]);
}}
