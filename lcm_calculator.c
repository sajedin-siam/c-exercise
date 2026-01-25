#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter number 1: ");
    scanf("%d", &a);

    printf("Enter number 2: ");
    scanf("%d", &b);
    int i = (a > b) ? a : b;
    while (1)
    {
        if (i % a == 0 &&i % b == 0)
        {
            printf("LCM number is: %d", i);
             break;
        }
        i++;
    }

    return 0;
}
