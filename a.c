#include <stdio.h>
int main()
{   int sum=0;
int a,i,b;
    int n[650] ={0};
    n[648]=2; n[649]=0;

    for (a=1; a<1000; a++)

        for (i=0; i<649 ; i++)
        {
            if (n[i+1]>4)
            n[i]= ( (2* n[i] ) %10) +1;
            else
            n[i]= (2 * n[i] ) %10;
        }

    for (b=0; b<649; b++)
    sum=sum+n[b];

    printf("%d",sum);
    printf("%d",n[0]);
}
