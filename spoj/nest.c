#include<stdio.h>
void main()
{
                int n;
                scanf("%d ",&n);
                int t;
                int a;
                int b;
                int k;
                while(n--)
                {
                                scanf("%d %ld",&a,&b);
                                t=a%10;
                                switch(t)
                                {
                                                case 0:printf("0\n");break;
                                                case 1:printf("1\n");break;
                                                case 2:
                                                k=b%4;
                                                switch(k)
                                                {
                                                                case 0:printf("6\n");break;
                                                                case 1:printf("2\n");break;
                                                                case 2:printf("4\n");break;
                                                                case 3:printf("8\n");break;
                                                }
                                                break;
                                                case 3:
                                                k=b%4;
                                                switch(k)
                                                {
                                                                case 0:printf("1\n");break;
                                                                case 1:printf("3\n");break;
                                                                case 2:printf("9\n");break;
                                                                case 3:printf("7\n");break;
                                                }
                                                break;
                                                case 4:
                                                k=b%2;
                                                switch(k)
                                                {
                                                                case 0:printf("6\n");break;
                                                                case 1:printf("4\n");break;
                                                }
                                                break;
                                                case 5:printf("5\n");break;
                                                case 6:printf("6\n");break;
                                                case 7:
                                                k=b%4;
                                                switch(k)
                                                {
                                                                case 0:printf("1\n");break;
                                                                case 1:printf("7\n");break;
                                                                case 2:printf("9\n");break;
                                                                case 3:printf("3\n");break;
                                                }
                                                break;
                                                case 8:
                                                k=b%4;
                                                switch(k)
                                                {
                                                                case 0:printf("6\n");break;
                                                                case 1:printf("8\n");break;
                                                                case 2:printf("4\n");break;
                                                                case 3:printf("2\n");break;
                                                }
                                                break;
                                                case 9:
                                                k=b%2;
                                                switch(k)
                                                {
                                                                case 0:printf("1\n");break;
                                                                case 1:printf("9\n");break;
                                                }
                                }
                }
}
