#include <stdio.h>

int main() {
    int arr[100], n;
    int sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter %d numbers (1 to %d with one missing):\n", n - 1, n);

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;

    printf("Missing Number = %d", total - sum);

    return 0;
}
