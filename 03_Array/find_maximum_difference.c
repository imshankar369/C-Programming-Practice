#include <stdio.h>

int main() {
    int arr[100], n, maxDiff;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    maxDiff = arr[1] - arr[0];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] - arr[i] > maxDiff)
                maxDiff = arr[j] - arr[i];
        }
    }

    printf("Maximum Difference = %d\n", maxDiff);

    return 0;
}
