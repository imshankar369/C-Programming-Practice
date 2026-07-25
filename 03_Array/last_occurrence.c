#include <stdio.h>

int main() {
    int arr[100], n, key, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            pos = i;
    }

    if(pos != -1)
        printf("Last Occurrence = %d", pos + 1);
    else
        printf("Element Not Found");

    return 0;
}
