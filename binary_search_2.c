#include <stdio.h>
int main()
{
    int n, a[100], lr, up, mid, item, found = 0;
    printf("Enter how many numbr :");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Array is Empty/Searching is not Possible.\n ");
        return 0;
    }
    printf("Enetr the Array Element:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array Element are:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Enetr the searching Element :");
    scanf("%d", &item);
    lr = 0;
    up = n - 1;
    while (lr <= up)
    {
        mid = (lr + up) / 2;
        if (a[mid] == item)

        {
            printf("Item %d is found at position %d(index %d)",item, mid + 1, mid);
            found = 1;
            break;
        }
        else if (a[mid] < item)
        {
            lr = mid + 1;
        }
        else
        {
            up = mid - 1;
        }
    }

    if (!found)
    {
        printf("Item is not found\n");
    }
    return 0;
}
