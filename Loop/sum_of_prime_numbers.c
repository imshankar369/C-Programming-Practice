#include <stdio.h>

int main() {
    int n, sum = 0;

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
            sum += i;
    }

    printf("Sum of Prime Numbers = %d", sum);

    return 0;
}
