#include <stdio.h>

int main() {
    int n, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;

        if (digit % 2 == 0)
            count++;

        n /= 10;
    }

    printf("Even Digits = %d", count);

    return 0;
}
