#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    double radian,result,pi;
    pi=3.1416;
    printf("enter t :");
    scanf("%d",&t);
    radian= t *(pi/180.0);
    result=tan(radian);
    printf("tan(%.2d)=%.3lf",t,result);
    return 0;
}