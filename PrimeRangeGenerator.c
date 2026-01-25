#include <stdio.h>
#include <math.h>
int main()
{
    int n, m;
    printf("enter number m:");
    scanf("%d", &m);
    printf("enter number n:");
    scanf("%d", &n);

    printf("Prime numbers from %d to %d are:\n",m, n);
    for (m; m <= n; m++)
    {
        int prime = 1;
        int t = sqrt(m);
        for (int j = 2; j <= t; j++)
        {
            if (m % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d\n", m);
        }
    }
    return 0;
}