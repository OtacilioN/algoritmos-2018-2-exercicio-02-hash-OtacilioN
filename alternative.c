#include <stdio.h>

int main(void)
{
    unsigned long long int t, indice, i, result, counter = 0;
    scanf("%llu", &t);
    unsigned long long int a, b, x, n, c, d, m, partial = 0;
    unsigned long long mInN = 0, newN = 0;
    for (indice = 0; indice < t; indice++)
    {
        scanf("%llu %llu %llu %llu %llu %llu %llu", &a, &b, &x, &n, &c, &d, &m);
        mInN = n / m;
        newN = n % m;
        partial = a * x + b;
        result = partial % m;
        if (result >= c && result <= d)
            counter++;
        for (i = 1; i <= newN; i++)
        {
            partial = partial + a;
            if (partial < m)
                result = result + a;
            else
                result = partial % m;
            if (result >= c && result <= d)
                counter++;
        }
        printf("%llu\n", counter + (mInN * ((d - c) + 1)));
        counter = 0;
    }
    return 0;
}
