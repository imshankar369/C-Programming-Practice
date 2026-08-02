#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int main() {

    float a, b;
    int choice;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(choice) {

        case 1:
            printf("Result = %.2f", add(a, b));
            break;

        case 2:
            printf("Result = %.2f", subtract(a, b));
            break;

        case 3:
            printf("Result = %.2f", multiply(a, b));
            break;

        case 4:
            if (b == 0)
                printf("Division by zero is not allowed.");
            else
                printf("Result = %.2f", divide(a, b));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
