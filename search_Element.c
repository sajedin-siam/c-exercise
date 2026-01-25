#include <stdio.h>
int main()
{
    int arr[100], n, i, search, found = 0;
    printf("Enter number of element:");
    scanf("%d", &n);
    printf("array element :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter to element tosearch:");
    scanf("%d", &search);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("Element %d found at position %d\n", search, i + 1);
            found = 1;
            break;
        }
    }
    if (found ==0)
    {
        printf("Element %d not founf in to this array\n", search);
    }

    return 0;
}