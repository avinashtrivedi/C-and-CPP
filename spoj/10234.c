#include<stdio.h>
int main()
{
                int n;
                int i;
                scanf("%d",&n);
                while(n--)
                {
                                char arr[51];
                                scanf("%s",arr);
                                i=0;
                                while(arr[i]!='\0')
                                {
                                                if(arr[i]=='D'){ i=54;break;}
                                                i++;
                                }
                                if(i==54)printf("You shall not pass!\n");
                                else printf("Possible\n");
                }
                return 0;
}
