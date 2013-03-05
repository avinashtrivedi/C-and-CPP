#include<stdio.h>
#include<conio.h>
float x,y,z;
void func(float,float,float);
void main()
{
func(0,0,0);
}
void func(float x,float y,float z)
{
                float x1,y1,z1;
                x1=(17-y+2*z)/20;
                y1=(-18-3*x1+z)/20;
                z1=(25-2*x1+3*y1)/20;
                if((x==x1)&&(y=y1)&&(z==z1))printf("%f\t%f\t%f\n",x,y,z);
                else
                {
                func(x1,y1,z1);}
}
