#include <stdio.h>

int main() {
    int arr[100], n, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;

    printf("Array after swapping:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
