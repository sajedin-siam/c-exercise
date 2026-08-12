#include<stdio.h>
int main()
{
    int a,b,c,medium;
    printf("Enter any number a :");
    scanf("%d",&a);
    printf("Enter any number b :");
    scanf("%d",&b);
    printf("Enter any number c :");
    scanf("%d",&c);
    medium =( (a > b) ? ((a < c) ? a : (b > c ? b : c))  : ((b < c) ? b : (a > c ? a : c)) );
    printf("Medium number is: %d\n", medium);
    return 0;
}
