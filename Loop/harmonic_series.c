#include <stdio.h>

int main() {
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Harmonic Series:\n");

    for (int i = 1; i <= n; i++) {
        printf("1/%d ", i);

        if (i != n)
            printf("+ ");
    }

    return 0;
}
