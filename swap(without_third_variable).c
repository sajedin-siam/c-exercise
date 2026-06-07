#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the number A :");
    scanf("%d", &a);
    printf("Enter the number b :");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n");
    printf("After swap A:%d\n", a);
    printf("After swap B:%d\n", b);

    return 0;
}