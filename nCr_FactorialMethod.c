#include <stdio.h>
#include <math.h>
int main()
{
    int n, r;
    long result;
    printf("n = ");
    scanf("%d", &n);
    printf("r = ");
    scanf("%d", &r);

    long factn = 1, factr = 1, factnr = 1;
    for (int i = 1; i <= n; i++)
    {
        factn = factn * i;
    }

    for (int i = 1; i <= r; i++)
    {
        factr *= i;
    }

    for (int i = 1; i <= (n - r); i++)
    {
        factnr *= i;
    }

    result = factn / (factr * factnr);
    printf("nCr = %ld\n", result);
    return 0;
}
