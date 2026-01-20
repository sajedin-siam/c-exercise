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
    printf("equvalent number is :");
    for (int i = 15; i >= 0; i--)
    {
        int t = (n >> i) & 1;
        printf("%d", t);
    }
    return 0;
}