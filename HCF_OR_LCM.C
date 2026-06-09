#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter number first number :");
    scanf("%d", &n1);
    printf("Enter number second number :");
    scanf("%d",& n2);
    int a=n1;
    int b=n2;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    int HCF = a;
    int LCM = (n1 * n2) / HCF;
    printf("HCF:%d", HCF);
    printf("\n\n");
    
    printf("LCM:%d", LCM);
    return 0;
}