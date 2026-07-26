#include <stdio.h>

int main() {
    int arr[100], n;
    int smallestPositive = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            if (smallestPositive == -1 || arr[i] < smallestPositive)
                smallestPositive = arr[i];
        }
    }

    if (smallestPositive == -1)
        printf("No positive number found.");
    else
        printf("Smallest Positive Number = %d", smallestPositive);

    return 0;
}
