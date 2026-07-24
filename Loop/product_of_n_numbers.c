#include <stdio.h>

int main() {
    int n;
    long long product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        product *= i;
    }

    printf("Product = %lld", product);

    return 0;
}
