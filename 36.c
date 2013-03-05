/*The decimal number, 585 = 10010010012 (binary), is palindromic in both bases.
Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.
(Please note that the palindromic number, in either base, may not include leading zeros.)*/
#include<stdio.h>
#include<conio.h>
void binary(int);
int arr[25];
 long int a=0;
void main()
{

                int t,y,x,num,r=0;
                for(t=1;t<1000000;t++)
                {
                y=t;num=0;
      while(y!=0)         ///steps to find palindrome.............
  {
      r=y%10;
      num=(num*10)+r;
      y=y/10;
  }
  if(t==num)  binary(t);
}
printf("%d",a);
}
void binary(int numm)
{
                int j,i=0;
                int r=numm;
                //int j=24;
                while(numm!=0)
                {
                                arr[i]=numm%2;
                                numm=numm/2;
                                //printf("%d  ",arr[i]);
                                i++;
                }
                //
                //printf("%d",i);
                int k=0;
                for(j=0;j<=(i/2)-1;j++)
                {
                                if(arr[j]==arr[i-j-1]) k++;
                }
                if(k==i/2) { a=a+r;//printf("%d",a);
                }
                //else printf("not palindrome");



}
