#include <stdio.h>

int main() {
    int n, digit;
    int hasZero = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;

        if (digit == 0)
            hasZero = 1;

        n /= 10;
    }

    if (hasZero)
        printf("Duck Number");
    else
        printf("Not a Duck Number");

    return 0;
}
