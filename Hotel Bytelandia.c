#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);

	int n;

	while(t--)
	{
		int arr[10000] = {0};
		scanf("%d",&n);

		int i,temp;
		for(i =0;i < n;i++)
		{
			scanf("%d",&temp);
			arr[temp] +=1;
		}

		for(i =0;i < n;i++)
		{
			scanf("%d",&temp);
			arr[temp] +=(-1);
		}

		int count = 0;
		int max = 0;

		for(i = 0; i < 10000; i++)
		{
			count += arr[i];
			if(count > max)
				max = count;
		}

		printf("%d\n",max);
	}

	return 0;
}
