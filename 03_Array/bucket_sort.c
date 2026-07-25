#include <stdio.h>

int main() {
    int arr[100], bucket[101] = {0};
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements (0-100):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        bucket[arr[i]]++;
    }

    printf("Sorted Array:\n");

    for (int i = 0; i <= 100; i++) {
        while (bucket[i] > 0) {
            printf("%d ", i);
            bucket[i]--;
        }
    }

    return 0;
}
