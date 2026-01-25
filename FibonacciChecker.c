#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("n=:");
    scanf("%d", &n);

    long a, b, c;
    a = 0;
    b = 1;
    for (int i = 1; a < n; i++)
    {

        c = a + b;
        a = b;
        b = c;
    }
    if (a == n)
    {
        printf("fibonacci");
    }
    else
    { 
        printf("not fibonacci");
    }

    return 0;
}
