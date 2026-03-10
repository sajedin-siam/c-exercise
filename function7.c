/*Use libary function to calculte the square of a number given by user.*/
#include<stdio.h>
#include<math.h>
float square(int n){
    return pow(n,2);
}
int main()
{
    int n,result;
    //input from user
    printf("Enter a nuumber:");
    scanf("%d",&n);
    //call the function
    result=square(n);

    //output result
     printf("Answer is :%d",result);

    return 0;
}