#include<stdio.h>
#include<iostream>
void func(int *arr,int a);
int main()
{
                int a,b,c;
                int i=0;
                scanf("%d %d %d",&a,&b,&c);
                int arr[a];
                while(i<a)
                                scanf("%d",&arr[i++]);
                 func(arr,a);
                 i=a-1;
                 int t=0;
                 while(t<c*b)
                 {
                                 t=t+arr[i--];

                 }
                 a=a-i-1;
                 printf("%d\n",a);

}
void func(int *arr,int a)
{
                int i, j;
                long int temp ;
	for ( i = 0 ; i <a-1 ; i++ )
	{
		for ( j = i + 1 ; j <a ; j++ )
		{
			if ( arr[i] > arr[j] )
			{
				temp = arr[i] ;
				arr[i] = arr[j] ;
				arr[j] = temp ;
			}
		}
	}
}

