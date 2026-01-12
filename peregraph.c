//write that read and display a line of taxt.
#include<stdio.h>
int main()
{
    char st[100];
    printf("Enter any line :");
    fgets(st,sizeof(st),stdin);
    printf("your entered line : %s",st);
    return 0;
}

