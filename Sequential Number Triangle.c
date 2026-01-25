#include <stdio.h>

int main()
{
    int n;
    printf("Enter number :");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        int num = row;
        for (int col = 1; col <= row; col++)
        {
            printf("%d  ", num++);
        }
        printf("\n");
    }

    return 0;
}