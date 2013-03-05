#include<stdio.h>
#include<conio.h>
void main()
{
                FILE *fptr;
                int ch;
                int arr[20][20];
                int i,j;
                int t,mul=0;
                int t1,t2,t3,t4,t5;
                i=j=0;
                int k;
                fptr=fopen("c:\\aa.txt","r");
                while(fscanf(fptr,"%d",&ch)!=EOF)
                {
                             if(j==20) {  i++;j=0; }
                        //printf("%d ",ch);
                        arr[i][j]=ch; j++;
                }
               for(i=0;i<20;i++)        ///1000-4 =996
                {  for(j=0;j<20;j++)
                      printf("%d  ",arr[i][j]);
                       printf("\n");
                }
               for(i=0;i<20;i++)           ///left to right
                {
                                for(j=0;j<17;j++)
                                {
                                     t=(arr[i][j])*(arr[i][j+1])*arr[i][j+2]*arr[i][j+3];
                                     //printf("%d\n",t);
                                     if(t>mul) mul=t;
                                }
                }

               for(i=0;i<20;i++)        ///20          ....top to bottom
                {
                                for(j=0;j<17;j++)             ///17
                                {
                                     t1=arr[j][i]*arr[j+1][i]*arr[j+2][i]*arr[j+3][i];
                                     if(t1>mul) mul=t1;
                                }
                }
                for(i=16;i>=0;i--)         ///diagonal scanning upper part of  (  \   )    type..
                {             k=i;
                                for(j=0;j<=16-i;j++)
                                {
                                                t2=arr[j][k]*arr[j+1][k+1]*arr[j+2][k+2]*arr[j+3][k+3];
                                                if(t2>mul) mul=t2;
                                                k++;
                                }
                }
               for(i=16;i>=0;i--)        /// diagonal scanning lower part  of (  \ )
                {             k=i;
                                for(j=0;j<=16-i;j++)
                                {
                                                t3=arr[k][j]*arr[k+1][j+1]*arr[k+2][j+2]*arr[k+3][j+3];
                                                if(t3>mul) mul=t3;
                                                k++;
                                }
                }
                for(i=3;i<20;i++)          ///diagonal scanning  ( / ) type........upper part....
                {           k=i;
                                for(j=0;j<=i-3;j++)
                                {
                                         t4=arr[j][k]*arr[j+1][k-1]*arr[j+2][k-2]*arr[j+3][k-3];
                                         if(t4>mul) mul=t4;
                                                k--;
                                }
                }

              for(i=16;i>=1;i--)          ///diagonal scanning ( / ) type lower part........
                {           k=i;
                                for(j=19;j>i+2;j--)
                                {
                                         t5=arr[k][j]*arr[k+1][j-1]*arr[k+2][j-2]*arr[k+3][j-3];
                                         if(t5>mul) mul=t5;
                                                k++;
                                }
                }




               printf("\n%d",mul);



                fclose(fptr);
}
