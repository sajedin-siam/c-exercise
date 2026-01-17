#include<stdio.h>
#include<math.h>
int main()
{
    double n,pi;
    pi=3.1416;
    printf("Enter any value:");
    scanf("%lf",&n);
    printf("cos inverse(%lf)=%.2lf",n,acos(n)*180.0/pi);
    return 0;
}