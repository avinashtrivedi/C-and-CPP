///2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
///What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?  /// 232792560
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
 void main()
 {
                 long int i=20;
                 while(i)
                 { int j,count=0;
                                 for(j=2;j<=20;j++)
                                 {
                                     if(i%j==0) count++;
                                 }
                                 if(count==19) { printf("number is:: %d",i); break; }
                                 i++;
                 }



 }


