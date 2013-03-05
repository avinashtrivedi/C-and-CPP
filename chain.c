#include<stdio.h>
#include<conio.h>
#include<math.h>
int  main()
{

               unsigned int  a,t,b;
            int save;
                save=0;
            int k;
                for(t=100;t<=1000000;t++)
                {  b=t;k=1;
                while(b!=1)
                {
                                if(b%2==0){ b=b/2; k++;             }
                                else {b=(3*b)+1; k++;}
                }
                printf("%u\t%d\n",t,k);
                if(k>save) { a=t;save=k;    }
                }
                printf("%u\t%d",a,save);
                return 1;
}
