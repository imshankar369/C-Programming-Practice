#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[100], n, minDiff;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    minDiff = abs(arr[1] - arr[0]);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(abs(arr[i] - arr[j]) < minDiff)
                minDiff = abs(arr[i] - arr[j]);
        }
    }

    printf("Minimum Difference = %d", minDiff);

    return 0;
}
