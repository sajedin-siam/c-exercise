#include <stdio.h>
int main()
{
    int n, r;
    long factn, factor, result;
    printf("n=");
    scanf("%d", &n);
    printf("r=");
    scanf("%d", &r);
    factn = 1;
    for (int i = 1; i <= n; i++)
    {
        factn = factn * i;
    }
    factor = 1;
    for (int i = 1; i <= r; i++)
    {
        factor = factor * i;
    }
    result = factn / factor;
    printf("nPr=%d", result);
    return 0;
}