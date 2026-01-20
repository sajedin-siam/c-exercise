#include <stdio.h>

int main() {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("number %d is even\n",n);
    } else {
        printf("number %d is odd\n",n);
    }

    return 0;
}
