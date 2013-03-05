#include<stdio.h>
int main()
{
    printf("3.");
    int n=10;
    while(1)
    {
        printf("%d",n/7);
        n=(n%7)*10;
    }
}
