#include <stdio.h>

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Spy Numbers: ");

    for (int i = 1; i <= n; i++) {
        int temp = i;
        int sum = 0, product = 1;

        while (temp != 0) {
            int digit = temp % 10;
            sum += digit;
            product *= digit;
            temp /= 10;
        }

        if (sum == product)
            printf("%d ", i);
    }

    return 0;
}
