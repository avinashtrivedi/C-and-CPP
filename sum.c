
///Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.

#include<stdio.h>
#include<conio.h>
void main()
{
                int arr[100][50];
                int i,j;
                int ch;
                int sum;
                int t=0;
                int add[50];
                i=j=0;
    FILE *fptr;
    fptr=fopen("c:\\2.txt","r");
    while((ch=getc(fptr))!=EOF)
                {
                       if(ch=='\n') {i++,j=0;continue; }
                       arr[i][j]=ch;j++;
                }
                for(i=0;i<100;i++)
                {
                   for(j=0;j<50;j++)
                         arr[i][j]=arr[i][j] -48;
                }
                for(i=0;i<100;i++)
                {  for(j=0;j<50;j++)
                      printf("%d",arr[i][j]);
                       printf("\n");
                }
                for(i=49;i>=0;i--)
                {        sum=0;
                                for(j=0;j<100;j++)
                                {
                                      sum=sum+arr[j][i];
                                }
                                if(i==0)
                                {
                                                sum=sum+t;
                                                 add[0]=sum;
                                }
                                else {
                                        sum=sum+t;
                                          add[i]=sum%10;
                                           t=sum/10;      }

                }
                for(i=0;i<50;i++)
                                printf("%d ",add[i]);
}

