#include<stdio.h>
void main()
{
                int n,a,b;
                int c;
                int k=1;
                int x;
                int save=0;
                b=1;
                while(b)
                {
                                if(b!=1)
                                c=n;
                                else {scanf("%d",&n);b++;continue;}
                           if(fscanf(stdin,"%d",&n)!=EOF)break;
                           if(n<c)
                           {
                                k++;

                           }
                           else {
                                           if(k>save)save=k;
                                           //save=k;
                                           k=1;

                                  }
                                  //if(a==) break;
                                  b++;
                }
                printf("%d",save);


}
