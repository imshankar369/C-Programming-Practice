#include <stdio.h>

int main() {

    int arr[100], n;
    float sum = 0;
    int *ptr;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr;

    for(int i = 0; i < n; i++)
        sum += *(ptr + i);

    printf("Average = %.2f", sum / n);

    return 0;
}
