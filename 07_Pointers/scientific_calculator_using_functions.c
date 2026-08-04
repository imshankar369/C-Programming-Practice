#include <stdio.h>
#include <math.h>

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }

int main() {

    int choice;
    double a, b;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Power\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf", add(a, b));
            break;

        case 2:
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf", subtract(a, b));
            break;

        case 3:
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf", multiply(a, b));
            break;

        case 4:
            scanf("%lf %lf", &a, &b);
            if (b == 0)
                printf("Division by zero is not allowed.");
            else
                printf("Result = %.2lf", divide(a, b));
            break;

        case 5:
            scanf("%lf", &a);
            printf("Square Root = %.2lf", sqrt(a));
            break;

        case 6:
            scanf("%lf %lf", &a, &b);
            printf("Power = %.2lf", pow(a, b));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
