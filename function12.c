// Make your own pow functon
#include <stdio.h>
double pow(double base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    // handle negative exponent
    if (exp < 0)
    {
        double result = 1;
        for (int i = 0; i < -exp; i++)
        {
            result *= base;
        }
        return 1 / result;
    }
    // handle positive exponent

    double result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}
int main()
{
    double base;
    int exp;
    printf("Enter Base:");
    scanf("%lf", &base);
    printf("Enter Base:");
    scanf("%d", &exp);
    printf("%.2lf ^ %d=%.2lf\n", base, exp, pow(base, exp));
    return 0;
}