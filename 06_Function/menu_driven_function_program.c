#include <stdio.h>

int square(int n) {
    return n * n;
}

int cube(int n) {
    return n * n * n;
}

int main() {

    int choice, number;

    do {

        printf("\n===== MENU =====\n");
        printf("1. Square\n");
        printf("2. Cube\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter a number: ");
                scanf("%d", &number);
                printf("Square = %d\n", square(number));
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &number);
                printf("Cube = %d\n", cube(number));
                break;

            case 3:
                printf("Program terminated.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 3);

    return 0;
}
