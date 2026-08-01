#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isEven(n))
        printf("Even");
    else
        printf("Odd");

    return 0;
}
