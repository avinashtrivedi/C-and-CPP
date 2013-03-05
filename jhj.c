#include <stdio.h>
#include <math.h>

#define LIMIT 2000000

int bits[LIMIT/8 + 1];

#define GET_BIT(n) ((bits[n/8]>>(n%8))&1)
#define SET_BIT(n) (bits[n/8] |= 1 << (n%8))

int main() {
                int i,j;
int sqrt_lim = (int)(sqrtf(LIMIT)+1);

long long sum=0;
for (i=2; i<LIMIT; i++) {
if (! GET_BIT(i)) { // Found a prime
/* printf("%d\n", i); */
sum += i;
if (i<=sqrt_lim) for (j=i*i; j<LIMIT; j+=i) {
SET_BIT(j);
}
}
}
printf("%lld\n", sum);
}
