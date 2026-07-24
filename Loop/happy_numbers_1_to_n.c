#include <stdio.h>

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Happy Numbers: ");

    for (int i = 1; i <= n; i++) {
        int num = i;

        while (num != 1 && num != 4) {
            int sum = 0;

            while (num != 0) {
                int digit = num % 10;
                sum += digit * digit;
                num /= 10;
            }

            num = sum;
        }

        if (num == 1)
            printf("%d ", i);
    }

    return 0;
}
