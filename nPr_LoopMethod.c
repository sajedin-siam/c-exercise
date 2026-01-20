#include <stdio.h>
#include<math.h>
int main()
{
    int n, r;

    printf("n = ");
    scanf("%d", &n);
    printf("r = ");
    scanf("%d", &r);

    long result = 1;
    for (int i = 0; i < r; i++)
    {
        result *= (n - i);
    }

    printf("nPr = %ld\n", result);
    return 0;
}
