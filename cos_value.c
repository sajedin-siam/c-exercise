#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    double radian,result,pi;
    pi=3.1416;
    printf("Enter t :");
    scanf("%d",&t);
    radian= t * ( pi / 180.0);
    result= cos(radian);
    printf("cos(%d)=%lf\n",t,result);
    return 0;
}