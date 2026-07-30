#include <stdio.h>

int main() {

    int arr[5];
    int *ptr;

    ptr = arr;

    printf("Enter 5 numbers:\n");

    for(int i = 0; i < 5; i++)
        scanf("%d", ptr + i);

    printf("Array elements:\n");

    for(int i = 0; i < 5; i++)
        printf("%d ", *(ptr + i));

    return 0;
}
