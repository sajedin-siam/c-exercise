#include <stdio.h>
#define Max_size 100

int main()
{
    int A[Max_size];
    int n, i, p, v;

    printf("Enter number of elements in Array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &p);

    printf("Enter value to insert: ");
    scanf("%d", &v);

    if (p < 0 || p > n)
    {
        printf("Invalid position\n");
        return 0;
    }

    if (n >= Max_size)
    {
        printf("Array overflow! Cannot insert..\n");
        return 0;
    }

    for (i = n - 1; i >= p; i--)
    {
        A[i + 1] = A[i];
    }

    A[p] = v;

    n += 1;
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
