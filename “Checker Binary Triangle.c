#include <stdio.h>

int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {

            printf("%d ", (row + col + 1) % 2);
        }
        printf("\n");
    }

    return 0;
}