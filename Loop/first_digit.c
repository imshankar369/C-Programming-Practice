#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n >= 10) {
        n /= 10;
    }

    printf("First Digit = %d", n);

    return 0;
}
