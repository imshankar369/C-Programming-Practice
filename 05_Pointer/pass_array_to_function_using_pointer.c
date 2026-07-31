#include <stdio.h>

void printArray(int *ptr, int size) {

    for(int i = 0; i < size; i++)
        printf("%d ", *(ptr + i));
}

int main() {

    int arr[] = {5, 10, 15, 20, 25};

    printArray(arr, 5);

    return 0;
}
