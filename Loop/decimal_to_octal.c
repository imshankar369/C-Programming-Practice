#include <stdio.h>

int main() {
    int n, octal[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        octal[i] = n % 8;
        n /= 8;
        i++;
    }

    printf("Octal = ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }

    return 0;
}
