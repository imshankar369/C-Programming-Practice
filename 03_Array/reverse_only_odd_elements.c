#include <stdio.h>

int main() {
    int arr[100], n;
    int odd[100], count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 != 0)
            odd[count++] = arr[i];
    }

    int j = count - 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0)
            arr[i] = odd[j--];
    }

    printf("Array after reversing odd elements:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
