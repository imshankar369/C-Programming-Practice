#include <stdio.h>

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Harshad Numbers: ");

    for (int i = 1; i <= n; i++) {
        int temp = i, sum = 0, digit;

        while (temp != 0) {
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }

        if (sum != 0 && i % sum == 0)
            printf("%d ", i);
    }

    return 0;
}
