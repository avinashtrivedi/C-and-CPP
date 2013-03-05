//avinash trivedi 8/19/2012
#include <stdio.h>
int n=1;
int m=100;
int main(int n)
{
    printf("%d\n",n);
    n>=100 ? : main(n+1) ;
    printf("%d\n",m);
    m<=1? n=101:main(m-1);
    return 0;
}
