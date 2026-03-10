#include<stdio.h>
void calculateprice(float value){
    value=value*value;
    printf("Final price is :%f",value);
}

int main(){
    float value=123.3;
    calculateprice(value);
    return 0;
}