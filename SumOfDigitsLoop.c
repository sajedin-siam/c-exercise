#include <stdio.h>
int main()
{
    int n, r;
    printf("Enter any number :");
    scanf("%d", &n);
    while (n > 10)
    {
        r = 0;
        while (n > 0)
        {
            r = r + n % 10;
            n = n / 10;
        }
        n = r;
    }

    printf("Digital Root = %d\n", n);
    return 0;
}