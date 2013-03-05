
int prime(long long int x) ///find a number is prime or not and return 1 and 0 correspondingly..............
{
                long long int i, j,k=0;
     for(j=2;j<=x/2;j++)
     {
                     if((i%3==0)||(i%5==0)||(i%7==0)) {return 0;}
                     if(k>0) return 0;
                     if(x%j==0) {  k++;}
     }
     if(k==0) { return 1;  }
   return 0;
}
