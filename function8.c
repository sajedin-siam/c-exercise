// write function to calculate area of square, a circle & rectangle.
#include <stdio.h>
#include <math.h>
float squareArea(float side)
{
    return side * side;
}
float circleArea(float rad)
{
    return 3.1416 * rad * rad;
}
float ractangleArea(float a, float b)
{
    return a * b;
}
int main()
{
    float side, rad, a, b;
    printf("Enter Square value:");
    scanf("%f", &side);
    printf("Enter Circle value:");
    scanf("%f", &rad);
    printf("Enter a value:");
    scanf("%f", &a);
    printf("Enter b value:");
    scanf("%f", &b);
    printf("square Area is :%f\n", squareArea(side));
    printf("circle Area is :%f\n", circleArea(rad));

    printf("ractangle Area is :%f\n", ractangleArea(a, b));

    return 0;
}