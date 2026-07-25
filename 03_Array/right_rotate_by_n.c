#include <stdio.h>

int main() {
    int arr[100], n, rotate, temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter rotation count: ");
    scanf("%d", &rotate);

    rotate %= n;

    for (int i = 0; i < n; i++)
        temp[(i + rotate) % n] = arr[i];

    for (int i = 0; i < n; i++)
        arr[i] = temp[i];

    printf("Array after right rotation:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
