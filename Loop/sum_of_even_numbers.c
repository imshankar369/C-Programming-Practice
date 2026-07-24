#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of Even Numbers = %d", sum);

    return 0;
}
