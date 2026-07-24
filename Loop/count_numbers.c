#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
        count++;
    }

    printf("\nTotal Numbers = %d", count);

    return 0;
}
