#include<stdio.h>
#include<math.h>
int main()
{
    double n,pi;
    pi=3.1416;
    printf("Enter any value:");
    scanf("%lf",&n);
    printf("tan inverse(%lf)=%.2lf",n,atan(n)*180.0/pi);
    return 0;
} 