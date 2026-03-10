//write a function to find sum of digit of a number.
#include<stdio.h>
int sumofDIgit(int n){
    if (n==0)
    {
        return 0;
    }
    return (n%10)+sumofDIgit(n/10);/*n%10  extracts the last digit 
    'n/10' remove the last digit */
}
int main()
{
    int n; 
    printf("Enetr a number :");
    scanf("%d",&n);

    printf("Sum of digit of %d=%d\n",n,sumofDIgit(n));

    return 0;
}