#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    double radiant,result,pi;
    pi=3.1415;
    printf("enter t:");
    scanf("%d",&t);
    printf("cot(%d)=%.3lf",t,1/tan(t*(pi/180.0)));
    return 0;
}