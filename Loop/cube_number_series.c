#include <stdio.h>

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Cube Number Series:\n");

    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i * i);
    }

    return 0;
}
