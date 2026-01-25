#include <stdio.h>

int main()
{
    int x, y, ans=1; 
    printf("Enter number x: ");
    scanf("%d", &x);

    printf("Enter number y: ");
    scanf("%d", &y);

    for (int i = 1; i <= y; i++)
    {
        ans *= x;
    }

    printf("Answer is : %d\n", ans);
    return 0;
}
