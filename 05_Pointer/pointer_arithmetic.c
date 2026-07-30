#include <stdio.h>

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    int *ptr = arr;

    printf("First value = %d\n", *ptr);

    ptr++;

    printf("After increment = %d\n", *ptr);

    ptr += 2;

    printf("After adding 2 = %d\n", *ptr);

    return 0;
}
