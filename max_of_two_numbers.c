//write a program that read two numbers and display maximum(use integer number)
#include<stdio.h>
int main()
{
    int a,b,max;
    printf("A=");
    scanf("%d",&a);
    printf("B=");
    scanf("%d",&b);
    if (a>b){
        printf("maxmimum number is=%d)\n",a);
    }
    else{
     printf("maxmimum number is=%d\n",b);
    }
    return 0;
}