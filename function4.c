//sum of 2 
#include<stdio.h>
int sum(int a, int b){
    return a+b;
}

 int main(){
    int a ,b;

    printf("enter first  number: ");
    scanf("%d",&a);
     printf("enter second  number: ");
    scanf("%d",&b);
    int s=sum(a,b);
    printf("Sum is :%d",s);

    return 0;
 }
