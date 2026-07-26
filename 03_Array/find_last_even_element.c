#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 == 0) {
            printf("Last Even Element = %d", arr[i]);
            return 0;
        }
    }

    printf("No even element found.");

    return 0;
}
