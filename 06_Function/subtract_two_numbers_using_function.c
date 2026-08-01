#include <stdio.h>

int subtract(int a, int b) {
    return a - b;
}

int main() {

    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Difference = %d", subtract(a, b));

    return 0;
}
