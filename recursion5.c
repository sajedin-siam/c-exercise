// Calculate percentage of a student from Marks in Science, Math & English
#include <stdio.h>

float calcPercentage(int science, int math, int english)
{
    return ((science + math + english) / 3.0);
}

int main()
{
    int science, math, english;

    printf("Enter Science marks: ");
    scanf("%d", &science);

    printf("Enter Math marks: ");
    scanf("%d", &math);

    printf("Enter English marks: ");
    scanf("%d", &english);

    printf("Percentage is: %.2f%%\n", calcPercentage(science, math, english));

    return 0;
}