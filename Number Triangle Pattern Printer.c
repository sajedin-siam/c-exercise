#include <stdio.h>
int main()
{
    int n;
    printf("enter N:");
    scanf("%d", &n);
    for (int row = 2; row <= n; row++)
    {
        for (int col = 2; col <= row; col++)
        {
          printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}