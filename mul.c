///multiplication algorithm........... find square of a number of any digits..........
#include<stdio.h>
#include<conio.h>
#include<math.h>
void multi(int );
void main()
{
                int n;
printf("enter no ::");
scanf("%d",&n);
multi(n);
}
void multi(int y)
{
                int a;
                int i,j,sum,r,t;
                int p,q;
                int k;
                int r1,x;
                a=ceil(log10(y));
                int arr[a][a];
                int up[a];
                int down[a];
               int mul[(2*a)-1];

                /* store integers...........*/
                p=a;
                q=y;
                while(q!=0)
                {    p--;
                                up[p]=down[p]=q%10;
                                q=q/10;
                }
for(i=0;i<a;i++)
{
r=0;
for(j=a-1;j>=0;j--)
{
if(j!=0)
{
t=(down[i]*up[j])+r;
if(t>=10) {arr[i][j]=t%10;r=t/10;}
else { arr[i][j]=t;r=0;}
}
else
{
arr[i][j]=down[i]*up[j] + r;
}

}
}
for(i=0;i<a;i++)
{
for(j=0;j<a;j++)
{
printf("%d ",arr[i][j]);
}
printf("\n");
}
x=2*a-2;
r1=0;

 for(i=a-1;i>=0;i--)          ///diagonal scanning ( / ) type lower part........
                {           k=i;sum=0;
                                for(j=a-1;j>=i;j--)
                                {
                                    sum=sum+arr[k][j];
                                    k++;
                                }
                                mul[x]=(sum+r1)%10;
                                r1=(sum+r1)/10;
                                x--;
                }
                for(i=a-2;i>=0;i--)
                {           k=i;sum=0;
                                for(j=0;j<=i;j++)
                                {
                                                sum=sum+arr[j][k];
                                                k--;
                                }
                                if(x==0) {mul[0]=sum+r1; }
                               else { mul[x]=(sum+r1)%10;
                                r1=(sum+r1)/10;
                                x--;}
                }





                printf("multiplication::::::::\n");
                for(i=0;i<(2*a)-1;i++)
                {
                                printf("%d ",mul[i]);
                }
getch();
}
