#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {

    int original = n;
    int digits = 0;
    int sum = 0;

    while (original != 0) {
        digits++;
        original /= 10;
    }

    original = n;

    while (original != 0) {
        int digit = original % 10;
        sum += pow(digit, digits);
        original /= 10;
    }

    return sum == n;
}

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong Number.\n", n);
    else
        printf("%d is not an Armstrong Number.\n", n);

    return 0;
}
