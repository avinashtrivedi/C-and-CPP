/*The number 3797 has an interesting property. Being prime itself, it is possible to continuously remove digits from left to right, and remain prime at each stage: 3797, 797, 97, and 7. Similarly we can work from right to left: 3797, 379, 37, and 3.

Find the sum of the only eleven primes that are both truncatable from left to right and right to left.

NOTE: 2, 3, 5, and 7 are not considered to be truncatable primes.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void trunc_right(int);
void trunc_left(int);
int prime(int);
int sum=0;
int main()
{
int i,j;
int t;
//clrscr();
for(i=23;i<2000000;i+=2)
{
t=0;
for(j=2;j*j<=i;j++)
{
if(i%j==0)t++;
}
if(t==0){//printf("prime::%d\t",i);
trunc_right(i);
}

}
printf("%d",sum);

//getch();
}
void trunc_right(int a)
{
int i,x;
int y=a;
int j=0;
x=ceil(log10(a));
//printf("%d",x);
for(i=1;i<x;i++)
{
a=a/10;
if(prime(a)){j++;}
}
if(j==x-1) trunc_left(y);
//printf("c_prm::%d\n",y);

}
int prime(int a)
{
 int j,t;
t=0;
if(a==1) return 0;
for(j=2;j*j<=a;j++)
{
if(a%j==0)t++;
}
if(t==0){return 1;}
else return 0;
}
void trunc_left(int c)
{
int j,h;
int d=0;
//int sum=0;
int q=0;
int f,g=c;
h=ceil(log10(c));
for(j=h-1;j>=1;j--)
{
                f=pow(10,j);
                c=c%f;
                if(prime(c)) q++;
}
if(q==h-1)
{
                d++;
                sum=sum+g;
                if(d==11) exit;
                //printf("%d\n",g);
}
}
