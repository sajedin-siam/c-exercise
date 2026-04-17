#include <stdio.h>
int main()
{
    int n, a[100], i;
    // Enter array size or Enter array element
    printf("Enter how may number : ");
    scanf("%d", &n);

    printf("Enter array element : ");
    for (int k = 0; k < n; k++)
    {
        scanf("%d", &a[k]);
    }

    printf("Enter Delet positionm :");
    scanf("%d", &i);

    // check if array has element
    if (n == 0)
    {
        printf("Array is emptry.delet is not posibile");
        return 1;
    }
    // check if nposition is Valid
    if (i < 0 || i >= n)
    {
        printf("INvalid position");
        return 1;
    }
    // shift element
    for (int j = i; j < n - 1; j++)
    {
        a[j] = a[j + 1];
    }
    n--;

    // After delete
    printf("AFter delete Array Element :");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    return 0;
}