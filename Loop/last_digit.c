#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Last Digit = %d", n % 10);

    return 0;
}
