#include <stdio.h>

void decimalToBinary(int n) {

    if (n == 0) {
        printf("0");
        return;
    }

    int binary[32];
    int i = 0;

    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}

int main() {

    int n;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("Binary = ");
    decimalToBinary(n);

    return 0;
}
