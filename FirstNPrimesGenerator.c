#include <stdio.h>
#include <math.h>
int main()
{
    int n, prime, count = 0;
    printf("N=");
    scanf("%d", &n);
    for (int i = 2; count < n; i++)
    {
        prime = 1;
        int t = sqrt(i);
        for (int j = 2; j <= t; j++)
        {

            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if ((prime == 1))
        {
            printf("%d\n", i);
            count++;
        }
    }
    return 0;
}
