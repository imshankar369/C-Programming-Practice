#include <stdio.h>

int main() {
    int arr[100], n, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        int prime = 1;

        if(arr[i] < 2)
            prime = 0;

        for(int j = 2; j * j <= arr[i]; j++) {
            if(arr[i] % j == 0) {
                prime = 0;
                break;
            }
        }

        if(prime)
            count++;
    }

    printf("Prime elements = %d", count);

    return 0;
}
