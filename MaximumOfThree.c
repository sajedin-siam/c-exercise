#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any number a :");
    scanf("%d",&a);
    printf("Enter any number b :");
    scanf("%d",&b);
    printf("Enter any number c :");
    scanf("%d",&c);
    (a > b && a > c) ? printf("Maximum number is a = %d\n", a) : (b > c) ? printf("Maximum number is b = %d\n", b) : printf("Maximum number is c = %d\n", c);
   
    return 0;
}