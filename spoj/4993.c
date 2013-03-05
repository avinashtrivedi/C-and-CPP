#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    char s[100];
    double x,y,sum=0;
    char a[10],b[10],c[10];
        scanf("%[^(]s",s);
        scanf("%[^,]s",a);
        scanf("%[^)]s",b);
        scanf("%s",c);
        x=atof(a+1);
        y=atof(b+2);
        float p,q;
        while(1)
        {
            scanf("%[^(]s",s);
            scanf("%[^,]s",a);
            scanf("%[^)]s",b);
            scanf("%s",c);
            p=x;q=y;
            x=atof(a+1);
            y=atof(b+2);
            sum+=(double)sqrt((p-x)*(p-x) +(q-y)*(q-y));
            printf("The salesman has traveled a total of %.3lf kilometers.\n",sum);

        }
    }

