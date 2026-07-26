#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Leader Elements: ");

    for(int i = 0; i < n; i++) {
        int leader = 1;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                leader = 0;
                break;
            }
        }

        if(leader)
            printf("%d ", arr[i]);
    }

    return 0;
}
