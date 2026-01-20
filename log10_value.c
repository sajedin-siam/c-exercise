#include<stdio.h>
#include<math.h>
int main()
{
    double x,result;
    printf("Enter any number X: ");
    scanf("%lf", &x);
    result = log10(x);
    printf("log10(%.2lf) = %.2lf",x,result);
    return 0;
}