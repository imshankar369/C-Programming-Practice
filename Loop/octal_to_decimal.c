#include <stdio.h>

int main() {
    long long octal;
    int decimal = 0, base = 1, digit;

    printf("Enter an octal number: ");
    scanf("%lld", &octal);

    while (octal > 0) {
        digit = octal % 10;
        decimal += digit * base;
        base *= 8;
        octal /= 10;
    }

    printf("Decimal = %d", decimal);

    return 0;
}
