#include<stdio.h>
#include<math.h>
int main()
{
    double e,x,result;
    printf("Enter any value :");
    scanf("%lf",&e);
    printf("Enter any power value x:");
    scanf("%lf",&x);
    result=pow(e,x);
    printf("The Answer is:%.1lf",result);
    return 0;
}
