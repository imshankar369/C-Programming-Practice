#include <stdio.h>

int main() {
    int a, d, n;

    printf("Enter first term: ");
    scanf("%d", &a);

    printf("Enter common difference: ");
    scanf("%d", &d);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("AP Series:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", a + i * d);
    }

    return 0;
}
