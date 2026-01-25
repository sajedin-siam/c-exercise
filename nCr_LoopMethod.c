#include <stdio.h>
#include <math.h>
int main()
{
    int n, r;

    printf("n = ");
    scanf("%d", &n);
    printf("r = ");
    scanf("%d", &r);
    if (r < n - r)
    {
        r + n - r;
    }
    long result = 1;
    for (int i = 1; i <= r; i++)
    {
        result = result * (n - i + 1) / i;
    }
    printf("nCr=%d", result);
    return 0;
}
