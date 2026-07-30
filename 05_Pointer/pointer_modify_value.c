#include <stdio.h>

int main() {

    int num = 10;
    int *ptr = &num;

    printf("Before modification: %d\n", num);

    *ptr = 50;

    printf("After modification: %d\n", num);

    return 0;
}
