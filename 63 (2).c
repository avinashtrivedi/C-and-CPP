#include<stdio.h>
#include<math.h>
int main()
{
    int a,n;
    int t=1;
    for(a=2;a<=9;a++)
    {
        for(n=1;;n++)
        {
            if(ceil(log10(pow(a,n)))==n)
                t++;
            else break;
        }
    }
    printf("%d\n",t);

}
