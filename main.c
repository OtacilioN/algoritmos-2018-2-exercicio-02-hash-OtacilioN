#include <stdio.h>

int main(void)
{
    int t, i;
    scanf("%d", &t);
    int a[t], b[t], x[t], n[t], c[t], d[t], m[t];
    for (i = 0; i < t; i++)
        scanf("%d %d %d %d %d %d %d", &a[i], &b[i], &x[i], &n[i], &c[i], &d[i], &m[i]);
    for (i = 0; i < t; i++)
        printf("%d %d %d %d %d %d %d \n", a[i], b[i], x[i], n[i], c[i], d[i], m[i]);
    return 0;
}