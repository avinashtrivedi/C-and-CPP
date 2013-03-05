#include<stdio.h>
void main()
{
                int n;
                scanf("%d ",&n);
                int k=n;
                int arr[n];
                int j,i=j=0;
                int a;
                int t;
                int b;
                int c;
                int brr[10000]={0};
                while(n--)
                {
                                scanf("%d ",&arr[i++]);
                                scanf("%d ",&a);
                                t=0;
                                while(t<a)
                                {
                                                if(k==n)
                                                {scanf("%d ",&brr[j++]);t++;}
                                                else
                                                {
                                                                t++;
                                                                scanf("%d ",&b);
                                                                for(c=0;c<j;c++)
                                                                {
                                                                                if(b==brr[c]){ c=-1;break;}

                                                                }
                                                                if(c!=-1)
                                                                {

                                                                                brr[j++]=b;
                                                                }
                                                }

                                }


                }
                //i=0;
                /*for(i=0;i<k;i++)
                printf("%d  ",arr[i]);*/
                t=0;
                for(i=0;i<k;i++)
                {
                for(c=0;c<j;c++)
                {
                                if(arr[i]==brr[c]) {t++;break;}
                }

                }
                printf("%d\n",j-t);
}
