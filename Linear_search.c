#include <stdio.h>
int main()
{
    int A[100], n, item, found = 0;
    printf("Enter How many array Element :");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Array is Empty/Searching is not Possible.\n ");
        return 0;
    }

    printf("Enter the Array Element:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("ARRAY Element are:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("Enter the Search Value:");
    scanf("%d", &item);
    for (int i = 0; i < n; i++)
    {
        if (A[i] == item)
        {
            printf("Item=%d is found at positon %d .\n", item, i + 1);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Item is not found\n");
    }

    return 0;
}