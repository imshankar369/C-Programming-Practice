#include <stdio.h>

void display(int *arr, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}

int main() {

    int arr[100], n, sum = 0;
    int *ptr;

    printf("Enter array size: ");
    scanf("%d", &n);

    ptr = arr;

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
        scanf("%d", ptr + i);

    display(ptr, n);

    for (int i = 0; i < n; i++)
        sum += *(ptr + i);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / n);

    return 0;
}
