#include <stdio.h>

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Automorphic Numbers: ");

    for (int i = 1; i <= n; i++) {
        int square = i * i;
        int temp = i;
        int isAuto = 1;

        while (temp > 0) {
            if ((temp % 10) != (square % 10)) {
                isAuto = 0;
                break;
            }
            temp /= 10;
            square /= 10;
        }

        if (isAuto)
            printf("%d ", i);
    }

    return 0;
}
