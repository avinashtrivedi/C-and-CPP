#include<stdio.h>
void main()
{
 int i,k,n,a;
 scanf("%d",&n); 
 char s[81];
 for(i=1;i<=n;i++)
 {
           scanf("%d",&a);
           gets(s);
           printf("%d ",i);
           k=0;
           while(s[k]!='\0')
           {
                  if(k==a){k++;continue; }
                  printf("%c",s[k++]);  
           }
           printf("\n");          
           
 }
           
}
