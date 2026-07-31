#include <stdio.h>

void reverse(int *start, int *end) {

    if(start >= end)
        return;

    int temp = *start;
    *start = *end;
    *end = temp;

    reverse(start + 1, end - 1);
}

int main() {

    int arr[100], n;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    reverse(arr, arr + n - 1);

    printf("Reversed array:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
