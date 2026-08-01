#include <stdio.h>

int findMin(int arr[], int n) {

    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }

    return min;
}

int main() {

    int arr[100], n;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Minimum = %d", findMin(arr, n));

    return 0;
}
