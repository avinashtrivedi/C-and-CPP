#include<stdio.h>
#include<conio.h>
void main()
{
                FILE *fptr;
                int arr[1000];
                char ch;
                int t,mul=0;
                int i=0;
                fptr=fopen("c:\\aaa.txt","r");
                while((ch=getc(fptr))!=EOF)
                {
                                arr[i]=ch;
                                i++;
                }
                for(i=0;i<1000;i++)        ///1000-4 =996
                {
                         arr[i]=arr[i] -48;
                         //printf("%d",arr[i]);
                }
                for(i=0;i<996;i++)
                {             // mul=t;
                                t=arr[i]*arr[i+1]*arr[i+2]*arr[i+3]*arr[i+4];
                                if(t>mul) mul=t;

                }
                printf("%d",mul);

}
