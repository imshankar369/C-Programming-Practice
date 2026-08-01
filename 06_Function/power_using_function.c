#include <stdio.h>

long long power(int base, int exponent) {

    long long result = 1;

    for (int i = 1; i <= exponent; i++)
        result *= base;

    return result;
}

int main() {

    int base, exponent;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    printf("Result = %lld", power(base, exponent));

    return 0;
}
