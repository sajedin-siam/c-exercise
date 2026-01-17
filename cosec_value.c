#include <stdio.h>
#include <math.h>

int main() {
    double t,pi;
    pi=3.1416;
    printf("Enter angle : ");
    scanf("%lf", &t);
    printf("cosec(%lf) = %.2lf\n", t, 1 / sin(t * pi / 180.0));
    return 0;
}
  /*  #include<stdio.h>
#include<math.h>
int main()
{
    int t;
    double radiant,result,pi;
    pi=3.1416;
    printf("Enter t:");
    scanf("%d",&t);
    radiant=t*(pi/180.0);
    result=1/sin(radiant);
    printf("cosec(%d)=%.3lf",t,result);
    return 0;
} */