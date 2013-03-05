#include<stdio.h>
main()
{
    int arr[26]={0};
    char s[45];
    gets(s);
    int i=0;
    while(s[i]!='\0')
        {arr[s[i]-97]+=1;i++;}
    for(i=0;i<26;i++)
    {
        if(arr[i]!=0)
        printf("%c%d",97+i,arr[i]);
    }
}
