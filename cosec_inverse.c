#include<stdio.h>
#include<math.h>
int main()
{
    double n,pi;
    pi=3.1416;
    printf("Enter any value:");
    scanf("%lf",&n);
    printf("cosec inverse(%.2lf)=%.3lf(degree)\n",n,asin(1.0/n)*180.0/pi);
    return 0;
}
