#include<stdio.h>
#include<conio.h>
#include"prime.h"
void main()
{
                int t=0;
                int i;
                for(i=2;i<=200000;i++)
                {
                                if(prime(i)) t++;
                }
                printf("%d",t);
}
