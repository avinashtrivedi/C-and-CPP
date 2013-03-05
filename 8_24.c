//iitg trinity of neo.....
//24/8/2012
#include <math.h>
#include <stdio.h>
int main()
{
    int n;
    scanf("%d ",&n);
    while(n--)
    {
     int sum;
     scanf("%d",&sum);
    int a;
    for (a = 1; a <= sum/3; a++)
    {
        int b;
        for (b = a + 1; b <= sum/2; b++)
        {
            int c = sum - a - b;
            if ( c > 0 && (a*a + b*b == c*c) )
            printf("%d\n",a*b*c);
        }
    }
    }
    return 0;
}
