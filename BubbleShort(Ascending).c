#include <stdio.h>
int main()
{
    int a[100], n, i, temp;
    printf("Enter number of elemnt :");
    scanf("%d", &n);

    printf("Enter %d elemnts :", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Bubble Short
    for (i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];

                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("sorted array (Asending):");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}