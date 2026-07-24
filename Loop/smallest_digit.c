#include <stdio.h>

int main() {
    int n, digit, smallest = 9;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;

        if (digit < smallest) {
            smallest = digit;
        }

        n /= 10;
    }

    printf("Smallest Digit = %d", smallest);

    return 0;
}
