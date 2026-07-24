#include <stdio.h>

int main() {
    int n, rem;
    char hex[20];
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 16;

        if (rem < 10)
            hex[i] = rem + '0';
        else
            hex[i] = rem - 10 + 'A';

        n /= 16;
        i++;
    }

    printf("Hexadecimal = ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }

    return 0;
}
