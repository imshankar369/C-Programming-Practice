#include <stdio.h>

int main() {
    int arr[100], n, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int num = arr[i], rev = 0, temp = num;

        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        if (num == rev)
            count++;
    }

    printf("Palindrome numbers = %d", count);

    return 0;
}
