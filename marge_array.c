#include <stdio.h>
int main()
{
    int a[100], b[100], c[100], m1 = 0, m2 = 0, n;
    printf("Enter array size :");
    scanf("%d", &n);

    printf("entr array Element :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    if (a[100]==0)
    {
       printf("Array is empty");
       return 1;
    }
    

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0) // even number
        {
            b[m1] = a[i];
            m1++;
        }
        else
        { // odd number
            c[m2] = a[i];
            m2++;
        }
    }

    // display
    printf("Entered array element :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("Eeven element :\n");
    for (int i = 0; i < m1; i++)
    {
        printf("%d ", b[i]);
    }
    printf("odd element :\n");
    for (int i = 0; i < m2; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}