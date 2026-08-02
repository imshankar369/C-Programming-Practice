#include <stdio.h>

int binaryToDecimal(long long binary) {

    int decimal = 0, base = 1;

    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }

    return decimal;
}

int main() {

    long long binary;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    printf("Decimal = %d\n", binaryToDecimal(binary));

    return 0;
}
