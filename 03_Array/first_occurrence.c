#include <stdio.h>

int main() {
    int arr[100], n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("First Occurrence = %d", i + 1);
            return 0;
        }
    }

    printf("Element Not Found");

    return 0;
}
