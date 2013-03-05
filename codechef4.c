#include<stdio.h>
#define size 50000
int main(void)
{
	long unsigned n,k,t;
	char buff[size];
	unsigned long count=0;
	unsigned long divisible=0;
	int block_read=0;
	int is_first=0;
	int j;
	t=0;
	scanf("%lu",&n);

	while(count<n)
	{
		block_read=fread(buff,1,size,stdin);
		for(j=0;j<block_read;j++)
		{
			if(buff[j]=='\n')
			{
				if(is_first)
				{
					count++;
					printf("%d\n",_fact_zeros(t));
					t=0;
				}
				else
					is_first=1;
			}
			else
			{
				t=t*10+(buff[j]-'0');
			}
		}
	}
 return 0;
}
int _fact_zeros(register int arg)
{
	register int ret=0;
	while(arg>1)
	{
		ret+=arg/5;
		arg=arg/5;
	}
  return(ret);
 }
