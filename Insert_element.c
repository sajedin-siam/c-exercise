#include <stdio.h>
#define max 100
int main()
{
    int A[max], n, i, v;
    // array size
    printf("Enter How many number:");
    scanf("%d", &n);
    // Enter the array element
    printf("enter %d Element: ", n);
    for (int k = 0; k < n; k++)
    {
        scanf("%d", &A[k]);
    }
    // Entre position
    printf("ENter Position to insert (0 to %d):", n);
    scanf("%d", &i);
    // Entre new value
    printf("ENter Value : ");
    scanf("%d", &v);
    // check overflow
    if (n >= max)
    {
        printf("Array is full\n");
        return 1;
    }
    if (i < 0 || i > n)
    {
        printf("Invalid position \n");
        return 1;
    }
    // shift Element
    for (int j = n - 1; j >= i; j--)
    {
        A[j + 1] = A[j];
    }
    // insert
    A[i] = v;
    n++;
    // display
    printf("Array After insert :");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", A[k]);
    }
    return 0;
}