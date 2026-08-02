#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {

    int (*operation)(int, int);

    operation = add;
    printf("Addition = %d\n", operation(20, 10));

    operation = subtract;
    printf("Subtraction = %d\n", operation(20, 10));

    return 0;
}
