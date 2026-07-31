#include <stdio.h>

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    int *ptr = arr;
    int **pptr = &ptr;

    printf("Array elements:\n");

    for (int i = 0; i < 5; i++)
        printf("%d ", *(*pptr + i));

    return 0;
}
