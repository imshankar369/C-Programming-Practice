#include <stdio.h>

int linearSearch(int arr[], int n, int key) {

    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int main() {

    int arr[100], n, key;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int index = linearSearch(arr, n, key);

    if (index == -1)
        printf("Element not found");
    else
        printf("Element found at index %d", index);
}
