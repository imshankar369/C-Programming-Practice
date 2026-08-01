#include <stdio.h>

void sortArray(int arr[], int n) {

    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {

    int arr[100], n;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sortArray(arr, n);

    printf("Sorted Array:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
