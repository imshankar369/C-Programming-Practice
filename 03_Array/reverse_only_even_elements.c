#include <stdio.h>

int main() {
    int arr[100], n;
    int even[100], count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even[count++] = arr[i];
    }

    int j = count - 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            arr[i] = even[j--];
    }

    printf("Array after reversing even elements:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
