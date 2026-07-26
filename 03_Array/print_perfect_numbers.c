#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Perfect numbers: ");

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = 1; j < arr[i]; j++) {
            if (arr[i] % j == 0)
                sum += j;
        }

        if (sum == arr[i] && arr[i] > 0)
            printf("%d ", arr[i]);
    }

    return 0;
}
