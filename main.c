#include <stdio.h>

int main(void)
{
    long long t, result, counter = 0;
    scanf("%lld", &t);
    long long a, b, x, n, c, d, m, partial = 0;
    while (t--)
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &x, &n, &c, &d, &m);
        partial = a * x + b;
        result = partial % m;
        if (result >= c && result <= d)
            counter++;
        while (n--)
        {
            partial = partial + a;
            if (partial < m)
                result = result + a;
            else
                result = partial % m;
            if (result >= c && result <= d)
                counter++;
        }
        printf("%lld\n", counter);
        counter = 0;
    }
    return 0;
}
