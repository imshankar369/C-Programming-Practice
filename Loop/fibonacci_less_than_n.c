#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Fibonacci Numbers: ");

    while (a < n) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
