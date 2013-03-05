# Include <iostream.h>
# include <stdio.h>
# include <string.h>
a using the namespace the std;
int main ()
{
    int n, m, z;
    while (the scanf ("% de% d", & n, & z) = -1 && (n | | z))
    {
        while (z -) n * = 10;
        m = 2;
        / * int s = 0;
        for (int i = 2; i <= n; i + +) s = (s + m)% i;
        printf ("% d / n", s +1) ;/ / timeout * /
        / / Find the law
        / *
        n: 1 2 3 4 5 6 7 8 9 10
        J (N) 1 1 3 1 3 5 7 1 3 5
        found that J (N) in accordance with the grouping of the power of two in each group which in accordance with increase, if n be written as 2 ^ m + l, then the J (N) = 2 * l +1;
        : J (2 ^ m, + l) = 2 * l +1; m> = 0 && 0 <= l <2 ^ m,; * /
        int k = 0, l The, _n = n, cnt = 1 ;/ / n = 2 ^ k-+ l The;
        the while (_n) _n / = 2, k-+ +, Cnt * = 2 ; of k -, cnt / = 2;
        l = n - cnt;
        printf ("% d / n, 2 * l +1);
    }
    return 0;
}
