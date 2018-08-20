#include <stdio.h>

int main(void)
{
    int t, indice, i, result, counter = 0;
    scanf("%d", &t);
    int a, b, x, n, c, d, m;
    for (indice = 0; indice < t; indice++)
    {
        scanf("%d %d %d %d %d %d %d", &a, &b, &x, &n, &c, &d, &m);
        for (i = 0; i <= n; i++)
        {
            result = (a * (x + i) + b) % m;
            if (result >= c && result <= d)
                counter++;
        }
        printf("%d\n", counter);
        counter = 0;
    }

    return 0;
}