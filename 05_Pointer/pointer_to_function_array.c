#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {

    int (*operations[])(int, int) = {add, subtract, multiply};

    printf("Add = %d\n", operations[0](10, 5));
    printf("Subtract = %d\n", operations[1](10, 5));
    printf("Multiply = %d\n", operations[2](10, 5));

    return 0;
}
