#include <stdio.h>

int factorial(int n) {

    int fact = 1;

    for (int i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

int isKrishnamurthy(int n) {

    int original = n;
    int sum = 0;

    while (n > 0) {
        sum += factorial(n % 10);
        n /= 10;
    }

    return sum == original;
}

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isKrishnamurthy(n))
        printf("%d is a Krishnamurthy Number.\n", n);
    else
        printf("%d is not a Krishnamurthy Number.\n", n);

    return 0;
}
