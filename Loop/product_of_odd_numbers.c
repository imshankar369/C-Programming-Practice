#include <stdio.h>

int main() {
    int n;
    long long product = 1;

    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        product *= i;
    }

    printf("Product of Odd Numbers = %lld", product);

    return 0;
}
