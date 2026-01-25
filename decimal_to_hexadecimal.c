#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0\n");
    }
    printf("equivalent number is :");
    for (int i = 12; i >= 0; i -= 4)
    {
        int t = (n >> i) & 7;
        if (t < 10)
        {
            printf("%d", t);
        }
        else
        {
            printf("%c", t + 55);
        }
    }
    return 0;
}