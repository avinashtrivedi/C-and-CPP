#include<stdio.h>
#include<math.h>
void main()
{
                double n;
                scanf("%lf",&n);
                double  mid;
                double start,end;
                start=1;
                end=n;
                while(end-start>1e-4)
                {
                                mid=(start+end)/2;
                                if(mid*mid>n)end=mid;
                                else start=mid;
                }
                printf("%lf",start);

}
