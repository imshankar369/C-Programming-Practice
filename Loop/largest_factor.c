#include <stdio.h>

int main() {
    int n, largest = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            largest = i;
    }

    printf("Largest Factor = %d", largest);

    return 0;
}
