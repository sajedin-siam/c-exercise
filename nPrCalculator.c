#include <stdio.h>
int main()
{
    int n, r;
    printf("n=");
    scanf("%d", &n);
    printf("r=");
    scanf("%d", &r);
    int result = 1;
    for (int i = r + 1; i <= n; i++)
    {
        result *= i;
    }
    printf("nPr= %d", result);
    return 0;
}