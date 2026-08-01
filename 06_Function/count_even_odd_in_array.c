#include <stdio.h>

void countEvenOdd(int arr[], int n, int *even, int *odd) {

    *even = 0;
    *odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

int main() {

    int arr[100], n;
    int even, odd;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    countEvenOdd(arr, n, &even, &odd);

    printf("Even = %d\n", even);
    printf("Odd = %d\n", odd);

    return 0;
}
