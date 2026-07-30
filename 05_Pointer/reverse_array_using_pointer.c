#include <stdio.h>

int main() {

    int arr[100], n;
    int *start, *end, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    start = arr;
    end = arr + n - 1;

    while(start < end) {

        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed array:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
