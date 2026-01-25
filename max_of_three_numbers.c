#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("A=");
    scanf("%d",&a);
    printf("B=");
    scanf("%d",&b);
    printf("C=");
    scanf("%d",&c);
    if (a>=b && a>=c){
        printf("maximum number is A=%d\n",a);
    }
    else if(b>=a && b>=c){
     printf("maximum number is B=%d\n",b);
    }
    else{
        printf("maximum number is C=%d\n",c);
    }
    return 0;
}
