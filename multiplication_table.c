#include <stdio.h>
int main()
{
    int multiple = 1, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int Answer;
    for (int i = 1; i <= n; i++)
    {
        printf("Multiplication Table of %d\n",i);
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d =%d\n", i, j, i * j);
        }
    }
    return 0;
}