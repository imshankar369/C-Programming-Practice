#include <stdio.h>

int main() {

    int a = 10;
    int b = 20;

    const int *ptr = &a;

    printf("Value = %d\n", *ptr);

    ptr = &b;

    printf("New Value = %d\n", *ptr);

    return 0;
}
