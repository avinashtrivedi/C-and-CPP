#include<stdio.h>
#include<math.h>
void main()
{
                int n;
                scanf("%d ",&n);
                int a;
                long int b;
                while(n--)
                {
                                scanf("%d %ld",&a,&b);
                                if(b==0) {printf("1\n");continue;}
                                a=a%10;
                                b=b%4;
                                if(b==0) b=4;
                                printf("%d\n",(int)pow(a,b)%10);

                }
}
