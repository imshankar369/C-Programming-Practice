#include <stdio.h>

int main() {
    int n, count = 0, num = 2;

    printf("Enter N: ");
    scanf("%d", &n);

    while (count < n) {
        int isPrime = 1;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            count++;

        if (count == n)
            break;

        num++;
    }

    printf("%dth Prime Number = %d", n, num);

    return 0;
}
