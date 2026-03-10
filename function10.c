// write a function to find square root of a number.
#include <stdio.h>
int squareroot(int n)
{
    if (n < 0)
    {
        printf(" cannot find square root of a negative number\n");
        return -1;
    }
    if (n == 0)
    {
        return 0;
    }
    int answer = n;
    int temp = (answer + n / answer) / 2;
    while (temp < answer)
    {
        answer = temp;
        temp = (answer + n / answer) / 2;
    }
    return answer;
}
int main()

{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    int result = squareroot(num);
    printf("Square root of %d=%d\n", num, result);

    return 0;
}