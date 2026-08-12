/*
#include<stdio.h>
#include<math.h>
int main()
{
    double n,radiant,result,pi;
    pi=3.1416;
    printf("Enter any value:");
    scanf("%lf",&n);
    result=asin(n)*180.0/pi;
    printf("sin inverse(%lf)=%.3lf",n,result);
    return 0;
}*/
#include<stdio.h>
#include<math.h>
int main()
{
    double n,pi;
    pi=3.1416;
    printf("Enter any value:");
    scanf("%lf",&n);
    printf("sin inverse(%lf)=%.3lf",n,asin(n)*180.0/pi);
    return 0;
}