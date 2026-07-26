#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Peak Elements: ");

    for(int i = 0; i < n; i++) {
        if((i == 0 || arr[i] >= arr[i - 1]) &&
           (i == n - 1 || arr[i] >= arr[i + 1])) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
