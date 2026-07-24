#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        digit = binary % 10;
        decimal += digit * base;
        base *= 2;
        binary /= 10;
    }

    int octal[20], i = 0;

    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }

    printf("Octal = ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }

    return 0;
}
