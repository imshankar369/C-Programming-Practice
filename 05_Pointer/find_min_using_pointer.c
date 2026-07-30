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

    int min = *ptr;

    for(int i = 1; i < n; i++) {

        if(*(ptr + i) < min)
            min = *(ptr + i);
    }

    printf("Minimum = %d", min);

    return 0;
}
