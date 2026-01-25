#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("n:");
    scanf("%d", &n);
    
    long a, b, c;
    a = 0;
    b = 1;
    for (int i = 1; i <= n; i++)
    {
        printf("%ld\n", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
