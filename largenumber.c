#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter number A:");
    scanf("%d",&a);
    printf("Enter number b:");
    scanf("%d",&b);
    printf("Enter number c:");
    scanf("%d",&c);
    if (a>=b && a>c)
    {
        printf("%d is the largest number",a);
    }else if (b>=a&&b>c)
    {
        printf("%d is the largest number",b);
    }else{
        printf("%d is the largest number",c);
    }
    return 0;

    
}