#include <stdio.h>

int main() {
    int arr[100], result[100];
    int n, k = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            result[k++] = arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0)
            result[k++] = arr[i];
    }

    printf("Merged Array (Even then Odd):\n");

    for(int i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}
