#include<stdio.h>
int main()
{
    int s1,s2,s3,s4;
    printf("Enter Subject_1 number:");
    scanf("%d",&s1);
    printf("Enter Subject_2 number:");
    scanf("%d",&s2);
    printf("Enter Subject_3 number:");
    scanf("%d",&s3);
    printf("Enter Subject_4 number:");
    scanf("%d",&s4);
    (s1 < 0 || s1 > 100 || s2 < 0 || s2 > 100 || s3 < 0 || s3 > 100 || s4 < 0 || s4 > 100) ? printf("Mark must be between 0 to 100\n") :(s1 >= 40 && s2 >= 40 && s3 >= 40 && s4 >= 40) ? printf("You are pass\n") : printf("You are fail\n");
    return 0;
}
