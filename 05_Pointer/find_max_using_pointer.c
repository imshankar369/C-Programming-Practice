#include <stdio.h>

int main() {

    int arr[100], n;
    int *ptr;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr;

    int max = *ptr;

    for(int i = 1; i < n; i++) {
        if(*(ptr + i) > max)
            max = *(ptr + i);
    }

    printf("Maximum = %d", max);

    return 0;
}
