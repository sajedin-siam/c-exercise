#include<stdio.h>
int main()
{
    int s1,s2,s3,s4;
    float average,total;
    
    printf("Enter Subject_1 number:");
    scanf("%d",&s1);
    printf("Enter Subject_2 number:");
    scanf("%d",&s2);
    printf("Enter Subject_3 number:");
    scanf("%d",&s3);
    printf("Enter Subject_4 number:");
    scanf("%d",&s4);
    
    if (s1 < 0 || s1 > 100 || s2 < 0 || s2 > 100 || s3 < 0 || s3 > 100 || s4 < 0 || s4 > 100){
        printf("mark must be between 0 to 100");
        return 1;
    }   
    
    total = s1 + s2 + s3 + s4;
    average = total / 4;
    
    if (s1>=40 && s2>=40 && s3>=40 && s4>=40){
        printf("congratulations\n You are pass\n");
    
        if (average>=90){
            printf("First division");
        }
        else if (average>=80){
            printf("second division");
        }
        else if (average>=70){
            printf("third division");
        }
        else if (average>=60){
            printf("fourth division");
        }
        else{
            printf("passed but below division criteria");
        }
    }
    else {
        printf("You are fail");
    }
    
    return 0;
}