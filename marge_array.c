#include <stdio.h>

int main()
{
    int B[100], C[100], A[200];
    int b, a, c;
    int i, j;

    printf("Enter number of elements in B: ");
    scanf("%d", &b);

    printf("Enter %d elements for B:\n", b);
    for (i = 0; i < b; i++)
    {
        scanf("%d", &B[i]);
    }

    printf("Enter number of elements in C: ");
    scanf("%d", &a);

    printf("Enter %d elements for C:\n", a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &C[i]);
    }

    j = 0;
    for (i = 0; i < b; i++)
    {
        A[j] = B[i];
        j++;
    }
    for (i = 0; i < a; i++)
    {
        A[j] = C[i];
        j++;
    }

    c = b + a;

    printf("\nMerged Array (A): ");
    for (i = 0; i < c; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
