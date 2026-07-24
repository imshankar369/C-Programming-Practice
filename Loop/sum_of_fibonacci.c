#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;
    int sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += a;
        c = a + b;
        a = b;
        b = c;
    }

    printf("Sum of Fibonacci Series = %d", sum);

    return 0;
}
