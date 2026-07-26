#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            arr[i] = 0;
    }

    printf("Modified Array:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
