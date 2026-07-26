#include <stdio.h>

int main() {
    int arr[100], n;
    int largestNegative = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (!found || arr[i] > largestNegative) {
                largestNegative = arr[i];
                found = 1;
            }
        }
    }

    if (found)
        printf("Largest Negative Number = %d", largestNegative);
    else
        printf("No negative number found.");

    return 0;
}
