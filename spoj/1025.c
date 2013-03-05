#include <stdio.h>
void main( )
{
    int n,c;
    int i,j,temp,t;
    scanf("%d ",&n);
    while(n--)
    {
        scanf("%d ",&c);
        int arr[c],brr[c];
        for(i=0;i<c;i++)
        scanf("%d",&arr[i]);
        for(i=0;i<c;i++)
        scanf("%d",&brr[i]);
	for ( i = 0 ; i <c-1 ; i++ )
	{
		for ( j = 0 ; j <c-1-i ; j++ )
		{
			if ( arr[j] > arr[j + 1] )
			{
				temp = arr[j] ;
				arr[j] = arr[j + 1] ;
				arr[j + 1] = temp ;
			}
			if ( brr[j] > brr[j + 1] )
			{
				temp = brr[j] ;
				brr[j] = brr[j + 1] ;
				brr[j + 1] = temp ;
			}
		}
	}
	t=0;
	for ( i = 0 ; i <c ; i++ )
		t+=arr[i]*brr[i];

    printf("%d\n",t);
    }
}
