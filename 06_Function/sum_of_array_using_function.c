#include <stdio.h>

int sumArray(int arr[], int n) {

    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

int main() {

    int arr[100], n;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Sum = %d", sumArray(arr, n));

    return 0;
}
