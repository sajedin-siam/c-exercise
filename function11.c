// Write a function to print "Hot" or "cold" depend on the temperature user enter.
#include <stdio.h>
void tempchecker(int temp)
{
    if (temp >= 30)
    {
        printf("HOT\n");
    }
    else if (temp >= 20)
    {
        printf("WEARM\n");
    }
    else if (temp >= 10)
    {
        printf("COLD\n");
    }
    else
    {
        printf("Freeaing\n");
    }
}
int main()
{
    int temp;
    printf("Enter the tempwrature: ");
    scanf("%d",&temp);
    tempchecker(temp);
    
    return 0;
}