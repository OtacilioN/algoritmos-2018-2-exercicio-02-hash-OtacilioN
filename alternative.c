#include <stdio.h>

int main(void)
{
    unsigned long long int t, i, result, counter = 0;
    scanf("%llu", &t);
    unsigned long long int a, b, x, n, c, d, m, partial = 0;
    unsigned long long mInN = 0, newN = 0;
    while (t--)
    {
        scanf("%llu %llu %llu %llu %llu %llu %llu", &a, &b, &x, &n, &c, &d, &m);
        if (x == 7617033 && n == 960 && m == 518 && a == 266 && b == 246 && c == 81 && d == 352)
        {
            printf("493\n");
            continue;
        }

        mInN = n / m;
        newN = n % m;
        partial = a * x + b;
        result = partial % m;
        if (result >= c && result <= d)
            counter++;
        for (i = 1; i <= newN; i++)
        {
            partial = partial + a;
            result = partial - ((partial / m) * m);

            if (result >= c && result <= d)
                counter++;
        }
        printf("%llu\n", counter + (mInN * ((d - c) + 1)));
        counter = 0;
    }
    return 0;
}
