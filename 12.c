#include<stdio.h>
#include<conio.h>
void main()
{int i,sum=0;
//int64_t
       for(i=3;i<1000;i++)
       {
            if((i%3==0)||(i%5==0))
            {
                 sum=sum+i;
            }
       }
       printf("%d",sum);
}
