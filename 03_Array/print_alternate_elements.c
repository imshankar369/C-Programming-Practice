#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Alternate elements:\n");

    for(int i = 0; i < n; i += 2)
        printf("%d ", arr[i]);

    return 0;
}
