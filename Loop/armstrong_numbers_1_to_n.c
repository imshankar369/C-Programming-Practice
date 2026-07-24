#include <stdio.h>

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Armstrong Numbers: ");

    for (int i = 1; i <= n; i++) {
        int temp = i, sum = 0, digit;

        while (temp != 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if (sum == i)
            printf("%d ", i);
    }

    return 0;
}
