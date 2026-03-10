//table 
#include<stdio.h>
void printtsable(int n)//parameter/formal parameter
{
    for (int  i = 1; i <= 10; i++)
    {
        printf("%d\n",i*n);
    }
    
}
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);

    printtsable(n);//argument/actual parameter
    return 0;
}

