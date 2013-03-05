#include<iostream.h>
#include<conio.h>

void main()
{
int arr[3][3]={{1,6,1},{1,2,0},{0,0,3}};
float m[3]={1,0,0};
float n[3]={0,0,0};
float grtr=0.0,temp=0.1;

for(int f=0;f<=15;f++)
{

if(grtr==temp)
  {cout<<"break hogya "<<f<<"par ";
 break;}
temp=grtr;
grtr=0.0;
for( int i=0;i<=2;i++)
{

for( int j=0;j<=2;j++)
{

n[i]= n[i] + arr[i][j]*m[j];

if(n[i]>grtr)
{
grtr=n[i];

}

}

}

for(int p=0;p<=2;p++)
{
n[p]=n[p]/grtr;
}
  for(int l=0;l<=2;l++)
  {
  m[l]=n[l];

  }


}

for(int o=0;o<=2;o++)
	 {
	  cout<<n[o]<<endl;

	 }
	 cout<<(grtr-1);
	 }
