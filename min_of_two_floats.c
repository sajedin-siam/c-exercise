//write a program that read two numbers and display minimum(use floating number)

#include<stdio.h>
int main()
{
    float a,b,min;
    printf("A=");
    scanf("%f",&a);
    printf("B=");
    scanf("%f",&b);
    if (a<b){
        printf("minimum number is=%f\n",a);
    }
    else{
     printf("minimum number is=%f\n",b);
    }
    return 0;
}
