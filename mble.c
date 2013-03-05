#include<stdio.h>
#include<time.h>
#include<dos.h>
void main()
{
   clock_t start,end;
   start=clock();
   //delay(2000);
   sleep(2);
   end=clock();
   printf("%f",(end-start)/CLK_TCK);
}
