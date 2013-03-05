#include<stdio.h>

 int main(void)
 {
         float m,n;
         scanf("%f%f",&n,&m);
        if(n > m || m - n - 0.5 < 0 || (int)n%5!=0)
                 printf("%.2f\n",m);
         else
                printf("%.2f\n",m-n-0.5);
         return 0;
 }
