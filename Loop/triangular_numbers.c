#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Triangular Numbers:\n");

    for (int i = 1; i <= n; i++) {
        sum += i;
        printf("%d ", sum);
    }

    return 0;
}
