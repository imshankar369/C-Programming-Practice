#include <stdio.h>

int main() {
    int arr1[100], arr2[100], temp, n;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    printf("Enter first array:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter second array:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    for(int i = 0; i < n; i++) {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    printf("\nFirst Array After Swap:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr1[i]);

    printf("\nSecond Array After Swap:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr2[i]);

    return 0;
}
