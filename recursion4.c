// Write a function to convert celsius to farhenhite.
#include <stdio.h>
float convertTemp(float celsius) {
   float far=celsius*(9.0/5.0)+32;
   return far;
}
int main()
{
    printf("Enter the Celsius Temp: ");
    float celsius;
    scanf("%f",&celsius);
    printf("FAR: %f",convertTemp(celsius));

    return 0;
}