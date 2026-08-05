#include <stdio.h>
#include <math.h>

int countDigits(int n)
{
    if (n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

int armstrongSum(int n, int digits)
{
    if (n == 0)
        return 0;

    return (int)pow(n % 10, digits) + armstrongSum(n / 10, digits);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int digits = countDigits(n);

    if (armstrongSum(n, digits) == n)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}
