#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            printf("Smallest Factor (excluding 1) = %d", i);
            break;
        }
    }

    return 0;
}
