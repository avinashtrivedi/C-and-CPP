#include<stdio.h>
#include<iostream>
#include<math.h>
int main()
{
    long int x,y,z;
    while(1)
    {
        scanf("%ld %ld %ld",&x,&y,&z);
        z=sqrt((x*z)/y);
        x=x/z;
        y=y/x;
        printf("%ld\n",4*(x+y+z));
    }
    return 0;
}
