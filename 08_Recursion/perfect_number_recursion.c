#include <stdio.h>

int perfectSum(int n, int i)
{
    if (i > n / 2)
        return 0;

    if (n % i == 0)
        return i + perfectSum(n, i + 1);

    return perfectSum(n, i + 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (perfectSum(n, 1) == n)
        printf("Perfect Number\n");
    else
        printf("Not a Perfect Number\n");

    return 0;
}
