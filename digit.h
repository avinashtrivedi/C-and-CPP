int digit(long long int y)         /// find number of digits  in a number........
{ int n=0;
     while(y!=0)
     {
         y=y/10;
         n++;
     }
     return n;
}
