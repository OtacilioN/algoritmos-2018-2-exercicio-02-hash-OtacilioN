#include <stdio.h>

int main(void)
{
    unsigned long int t, indice, i, result, counter = 0;
    scanf("%lu", &t);
    unsigned long int a, b, x, n, c, d, m, partial = 0;
    for (indice = 0; indice < t; indice++)
    {
        scanf("%lu %lu %lu %lu %lu %lu %lu", &a, &b, &x, &n, &c, &d, &m);
        partial = a * x + b;
        result = partial % m;
        if (result >= c && result <= d)
            counter++;
        for (i = 1; i <= n; i++)
        {
            partial = partial + a;
            if (partial < m)
                result = result + a;
            else
                result = partial % m;
            if (result >= c && result <= d)
                counter++;
        }
        printf("%lu\n", counter);
        counter = 0;
    }
    return 0;
}
