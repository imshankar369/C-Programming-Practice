#include <stdio.h>

int main() {
    int arr[100], odd[100];
    int n, j = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0)
            odd[j++] = arr[i];
    }

    printf("Odd Elements:\n");

    for(int i = 0; i < j; i++)
        printf("%d ", odd[i]);

    return 0;
}
