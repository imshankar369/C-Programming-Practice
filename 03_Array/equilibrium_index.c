#include <stdio.h>

int main() {
    int arr[100], n;
    int totalSum = 0, leftSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    for(int i = 0; i < n; i++) {
        totalSum -= arr[i];

        if(leftSum == totalSum) {
            printf("Equilibrium Index = %d", i);
            return 0;
        }

        leftSum += arr[i];
    }

    printf("No Equilibrium Index");

    return 0;
}
