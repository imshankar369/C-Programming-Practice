#include <stdio.h>

int main() {
    int n, searchDigit, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter digit to search: ");
    scanf("%d", &searchDigit);

    while (n != 0) {
        digit = n % 10;

        if (digit == searchDigit) {
            count++;
        }

        n /= 10;
    }

    printf("Frequency of %d = %d", searchDigit, count);

    return 0;
}
