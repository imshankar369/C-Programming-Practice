#include <stdio.h>

int* findMax(int arr[], int size) {

    int *max = &arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > *max)
            max = &arr[i];
    }

    return max;
}

int main() {

    int arr[] = {12, 45, 7, 89, 23};

    int *result = findMax(arr, 5);

    printf("Maximum = %d", *result);

    return 0;
}
