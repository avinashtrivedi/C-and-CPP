#include<stdio.h>
int main()
{
	int a,b,count;
	scanf("%d",&a);
	while(a--)
	{
	                scanf("%d",&b);

		for(count=0;b>0;count+=(b=b/5));
		printf("%d\n",count);
	}
}
