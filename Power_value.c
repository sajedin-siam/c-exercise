//write a program that read two number and display the value of x^y
#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,result;
    printf("Enter any X value:");
    scanf("%lf",&x);
    printf("Enter any Y value:");
    scanf("%lf",&y);
    result=pow(x,y);
    printf("The value is:%.1lf",result);
    return 0;
}