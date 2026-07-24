#include <stdio.h>

int main() {
    int n, digit;
    int sum = 0, product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }

    if (sum == product)
        printf("Spy Number");
    else
        printf("Not a Spy Number");

    return 0;
}
