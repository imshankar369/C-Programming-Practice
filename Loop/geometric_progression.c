#include <stdio.h>

int main() {
    int a, r, n, term;

    printf("Enter first term: ");
    scanf("%d", &a);

    printf("Enter common ratio: ");
    scanf("%d", &r);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    term = a;

    printf("GP Series:\n");

    for (int i = 1; i <= n; i++) {
        printf("%d ", term);
        term *= r;
    }

    return 0;
}
