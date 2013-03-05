//iteration method .................................
#include<stdio.h>
#include<conio.h>
#include<math.h>
void initial_value();
float function(float);
float x_func(float);
int d,i=0;
float k,a,b,c;
void main()
{
int j=0;
float tt;
initial_value();
do
{
      tt=x_func(a);
      if(a==tt)break;
      a=tt;
}while(1);
printf("%f",a);

}
float function(float x)
{
    return(x*x*x+x*x-1);
}
float x_func(float y)
{
         return(pow((y+1),-.5));
}
     void initial_value()
    {
    int root1,root2;
    root1=root2=0;
    do
    {
        k=function(i);
        if(k<0) { a=i;i++; root1=1;}
        else { b=i; root2=1;i++;}
        if((root2==1)&&(root1==1)) break;
    }while(i);

printf("values of  a and b is::%f\t%f\n",a,b);
}

