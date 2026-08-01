#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("Inside function: a = %d, b = %d\n", a, b);
}

int main() {

    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap(a, b);

    printf("Outside function: a = %d, b = %d", a, b);

    return 0;
}
