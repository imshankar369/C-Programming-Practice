#include <stdio.h>

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Palindrome Numbers: ");

    for (int i = 1; i <= n; i++) {
        int temp = i, reverse = 0, digit;

        while (temp != 0) {
            digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp /= 10;
        }

        if (reverse == i)
            printf("%d ", i);
    }

    return 0;
}
