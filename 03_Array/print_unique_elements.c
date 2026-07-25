#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Unique Elements: ");

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }

        if(count == 1)
            printf("%d ", arr[i]);
    }

    return 0;
}
