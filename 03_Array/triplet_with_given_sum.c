#include <stdio.h>

int main() {
    int arr[100], n, sum, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target sum: ");
    scanf("%d", &sum);

    printf("Triplets:\n");

    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == sum) {
                    printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]);
                    found = 1;
                }
            }
        }
    }

    if(!found)
        printf("No triplet found.");

    return 0;
}
