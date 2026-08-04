#include <stdio.h>

int isAutomorphic(int n) {

    int square = n * n;
    int temp = n;

    while (temp > 0) {

        if ((temp % 10) != (square % 10))
            return 0;

        temp /= 10;
        square /= 10;
    }

    return 1;
}

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isAutomorphic(n))
        printf("%d is an Automorphic Number.\n", n);
    else
        printf("%d is not an Automorphic Number.\n", n);

    return 0;
}
