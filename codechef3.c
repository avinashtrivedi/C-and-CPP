#include<stdio.h>
int main()
{
                int a;
                float b;
                scanf("%d%f",&a,&b);
                if(a>b||b-a-.5<0||a%5!=0) printf("%.2f\n",b);
                else printf("%.2f\n",b-a-0.5);
         return 0;
}
