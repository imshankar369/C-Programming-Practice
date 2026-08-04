#include <stdio.h>

int isNeon(int n) {

    int square = n * n;
    int sum = 0;

    while (square > 0) {
        sum += square % 10;
        square /= 10;
    }

    return sum == n;
}

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isNeon(n))
        printf("%d is a Neon Number.\n", n);
    else
        printf("%d is not a Neon Number.\n", n);

    return 0;
}
