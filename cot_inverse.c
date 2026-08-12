#include<stdio.h>
#include<math.h>
int main()
{
    double n,pi;
    pi=3.1416;
    printf("Enter any value:");
    scanf("%lf",&n);
    printf("cot inverse(%lf)=%lf(degree)\n",n,atan(1.0/n)*180.0/pi);
    return 0;
}