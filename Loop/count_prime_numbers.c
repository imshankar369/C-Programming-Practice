#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        int isPrime = 1;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            count++;
    }

    printf("Total Prime Numbers = %d", count);

    return 0;
}
