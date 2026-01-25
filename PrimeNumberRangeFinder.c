#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number :");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are:\n", n);
    for (int i = 2; i <= n; i++)
    {
        int prime = 1;
        int t = sqrt(i);
        for (int j = 2; j <= t; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}