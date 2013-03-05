#include<stdio.h>
#include<math.h>
 int func(long int);
long int k;
long int t,a,b;
int main()
{
long int n;
long int j;
scanf("%d",&n);
for(t=1;t<=n;t++)
{
k=0;
scanf(" %ld %ld",&a,&b);
for(j=a;j<=b;j++)
{
func(j);

}

printf("Case #%ld: %ld\n",t,k);
}
//printf("%d\t%d",a,b);



   return 0;
}
int func(long int c)
{
                int x;
                int y;
                x=ceil(log10(c));
                if(c==pow(10,x)){x=x+1;}
               //printf("%d\n",c);
                double i,j;
                double p,q;
               i=0;j=x;//printf("****************\n");
              do
               {
                               i++;j--;
                                q=pow(10,j); //printf("%f\n",q);
                                p=pow(10,i); //printf("%f\n",p);
                                y=(c%(int)p)*(int)q +c/p;
                                if(ceil(log10(y))!=x) {}
                                else if(y>c&&y<=b)
                                { k++;}
                                else {}


                }while(j>=i);

                return 0;
}
