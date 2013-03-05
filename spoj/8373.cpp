#include<stdio.h>
#include<iostream>
#include<string.h>
int main()
{
                char arr[5][22];
                char s[4]="FBI";
                int i=0;
                int a=0;
                while(i<5)
                scanf("%s",arr[i++]);
                i=0;
               while(i<5)
               {
                               if(strstr(arr[i],s)!=NULL)
                               {printf("%d ",i+1); a=1;}
                               i++;
               }
               printf("\n");
               if(a==0)
               printf("HE GOT AWAY!\n");

}
