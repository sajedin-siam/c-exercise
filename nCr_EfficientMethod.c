#include <stdio.h>

int main()
{
    int n, r;

    printf(" n: ");
    scanf("%d", &n);
    printf(" r: ");
    scanf("%d", &r);

    if (r > n - r)
    {
        r = n - r;
    }

    long long result = 1;

    for (int i = 0; i < r; i++)
    {
        result = result * (n - i) / (i + 1);
    }

    printf("nCr = %lld\n", result);

    return 0;
}