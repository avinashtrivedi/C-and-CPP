#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i,j;
    int l;
    int k,t;
    for(i=2;i<10;i++)
    {               k=2;t=9;
                    do
                    {
                                l=ceil(log10(i*k));
                                    t-=1;
                    }while(t!=0);
    }



}
