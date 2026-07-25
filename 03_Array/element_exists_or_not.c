#include <stdio.h>

int main() {
    int arr[100], n, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element Exists");
    else
        printf("Element Does Not Exist");

    return 0;
}
