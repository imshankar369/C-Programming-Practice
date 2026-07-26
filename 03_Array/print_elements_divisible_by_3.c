#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Elements divisible by 3:\n");

    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0)
            printf("%d ", arr[i]);
    }

    return 0;
}
