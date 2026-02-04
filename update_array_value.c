#include <stdio.h>
int main()
{
    int i, n, a[100], p, v;
    printf("Enter the number of element a:");
    scanf("%d", &n);
    printf("enter the element :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("entered array element :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("enter update element :\n");
    scanf("%d", &p);
    if (p < 0 || p >= n)
    {
       printf("Invalid position!\n");
        return 1;
    }

    printf("enter update value :\n");
    scanf("%d", &v);
    a[p] = v;
    printf("After update:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}