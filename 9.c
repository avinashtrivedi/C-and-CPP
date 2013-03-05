#include<stdio.h>
#include<conio.h>
#include<math.h>
int prime(int);
int number(int);
void main()
{ int i,t,j,d,c,k;
int a,num;
int p=0;
                for(i=11;i<=37;i++)
                {
                       t=prime(i);
                       if(t==1)
                       {       d=number(i);
                                 num=1;
                                       for(j=2;j<=d;j++)
                                       {
                                            c=pow(10,d-1);
                                            k=(i%c) *10 +(i/c);
                                            a=prime(k);
                                            if(a=!1) { break;}
                                            else num++;
                                       }
                       }
                       if(num==d) { printf("%d\n",i);}

                }

}
int prime(int x) ///find a number is prime or not and return 1 and 0 correspondingly..............
{
                int j,k=0;
     for(j=2;j<=x;j++)
     {
                     if(x%j==0) {  k++;}
     }
     if(k==1) { return 1;  }
   return 0;
}
int number(int y)         /// find number of digits  in a number........
{ int n=0;
     while(y!=0)
     {
         y=y/10;
         n++;
     }
     return n;
}
