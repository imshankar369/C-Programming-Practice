#include <stdio.h>

float divide(int a, int b) {
    return (float)a / b;
}

int main() {

    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Division by zero is not allowed.");
        return 0;
    }

    printf("Quotient = %.2f", divide(a, b));

    return 0;
}
