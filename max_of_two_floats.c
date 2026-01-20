//write a program that read two numbers and display maximum (use floting number)
#include<stdio.h>
int main()
{
    float a,b,max;
    printf("A=");
    scanf("%f",&a);
    printf("B=");
    scanf("%f",&b);
    if (a>b){
        printf("maxmimum number is=%f\n",a);
    }
    else{
     printf("maxmimum number is=%f\n",b);
    }
    return 0;
}
