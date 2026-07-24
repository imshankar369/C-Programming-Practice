#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;

        if (digit % 2 == 0)
            sum += digit;

        n /= 10;
    }

    printf("Sum of Even Digits = %d", sum);

    return 0;
}
