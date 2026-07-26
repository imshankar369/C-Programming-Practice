#include <stdio.h>

int main() {
    int arr[100], n, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > n / 2) {
            printf("Majority Element = %d", arr[i]);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("No Majority Element");

    return 0;
}
