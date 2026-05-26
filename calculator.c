#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiple(int a, int b)
{
    return a * b;
}
float divide(int a, int b)
{
    if ( b == 0)
    {
        printf("ERROR!cannot divide by 0\n");
        return 0;
    }

    return (float)a / b;
}
int main()
{
    int choice,a,b;
    while (1)
    {
        printf("1.Addition\n");
        printf("2.subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
    if(choice==5){
        printf("Bye\n");
        break;
    }
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    if (choice==1)
    {
        printf("Result :%d\n",add(a,b));
    }
   else if (choice==2)
    {
        printf("Result :%d\n",subtract(a,b));
    }
   else if (choice==3)
    {
        printf("Result :%d\n",multiple(a,b));
    }
  else  if (choice==4)
    {
        printf("Result :%.2f\n",divide(a,b));
    }
    else{
        printf("Wrong choice!\n");
    }
    }
    return 0;
}