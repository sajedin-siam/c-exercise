#include<stdio.h>
int main()
{
    int n;
    printf("Enter any integer number :");
    scanf("%d",&n);
   (n % 2 == 0) ? printf("number %d is even",n) :printf("number %d is odd",n);
   return 0;
}