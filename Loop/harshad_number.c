#include <stdio.h>

int main() {
    int n, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }

    if (original % sum == 0)
        printf("Harshad Number");
    else
        printf("Not a Harshad Number");

    return 0;
}
