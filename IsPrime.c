#include <stdio.h>
int main()
{
    int n, prime=1;
    printf("Enter any number:");
    scanf("%d", &n);
    if (n < 2)
    {
        prime = 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    if (prime == 1)
    {
        printf("prime");
    }
    else
    {
        printf("Not prime");
    }
    return 0;
}