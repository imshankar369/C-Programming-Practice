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

    char hex[20];
    int i = 0, rem;

    while (decimal > 0) {
        rem = decimal % 16;

        if (rem < 10)
            hex[i] = rem + '0';
        else
            hex[i] = rem - 10 + 'A';

        decimal /= 16;
        i++;
    }

    printf("Hexadecimal = ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }

    return 0;
}
