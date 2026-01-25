#include <stdio.h>

int main()
{
    int num1, num2, gcd;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    printf("GCD number is :%d", gcd);
    return 0;
}
