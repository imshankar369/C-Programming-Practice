#include <stdio.h>

int countDigits(int n)
{
    if (n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
        printf("Total Digits = 1\n");
    else
        printf("Total Digits = %d\n", countDigits(n));

    return 0;
}
