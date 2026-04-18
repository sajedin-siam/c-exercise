#include <stdio.h>
int main()
{
    int a[100], b[100], c[100], m1, m2, i = 0, j = 0, k = 0;
    printf("Enter first array size :");
    scanf("%d", &m1);
    printf("Enter first array :");
    for (int i = 0; i < m1; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("Enter second array size :");
    scanf("%d", &m2);
    printf("Enter second array :");
    for (int j = 0; j < m2; j++)
    {
        scanf("%d", &c[j]);
    }

    while (i < m1 && j < m2)
    {
        if (b[i] < c[j])
        {
            a[k] = b[i];
            i++;
        }
        else
        {
            a[k] = c[j];
            j++;
        }
        k++;
    }

    while (i < m1)
    {
        a[k] = b[i];
        i++;
        k++;
    }
    while (j < m2)
    {
        a[k] = c[j];
        j++;
        k++;
    }
    int n = k;
    // display
    printf("\nFirst array: \n");
    for (i = 0; i < m1; i++)
    {
        printf("%d  ", b[i]);
    }
    printf("\nSecond  array: \n");
    for (j = 0; j < m2; j++)
    {
        printf("%d  ", c[j]);
    }
    printf("\nMerged sorted array array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
    return 0;
}