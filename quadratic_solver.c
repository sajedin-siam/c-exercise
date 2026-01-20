#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x1 , x2 , D;
printf("Enter any number a :");
scanf("%f",&a);
printf("Enter any number b :");
scanf("%f",&b);
printf("Enter any number c :");
scanf("%f",&c);
D = b*b -4*a*c;
if (D > 0){
    x1= (-b+sqrt(D))/(2*a);
    x2= (-b-sqrt(D))/(2*a);
    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);
  }else if(D == 0)
   {
     x1=x2 = -b/(2*a);
    printf("x1 = x2 = %.2f\n", x1);
}else {
        printf("Roots are imaginary (complex numbers)\n");
    }
    return 0;
}
