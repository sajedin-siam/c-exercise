#include <stdio.h>
int main()
{
    int i, n, j = -1, k = -1;
    int A[100], EVEN[100], ODD[100];
    printf("Enter the number of element:");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Array is empty\n");
        return 0;
    }

    printf("enter the element :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    i = 0;
    while (i < n)
    {
        if (A[i] % 2 == 0)
        {
            j++;
            EVEN[j] = A[i];
        }
        else
        {
            k++;
            ODD[k] = A[i];
        }
        i++;
    }

    printf("\nEven number:\n");
    for (int x = 0; x <= j; x++)
    {
        printf("%d ", EVEN[x]);
    }
    printf("\nOdd number:\n");
    for (int x = 0; x <= k; x++)
    {
        printf("%d ", ODD[x]);
    }
    return 0;
}