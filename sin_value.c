#include <stdio.h>
#include <math.h>

int main() {
    int t;
    double  result, radian,pi;
    pi=3.1416;
    printf("Enter t : ");
    scanf("%d", &t);

    radian = t * (pi / 180.0);  
    result = sin(radian);         

    printf("sin(%d) = %.4lf\n", t, result); 

    return 0;
}
