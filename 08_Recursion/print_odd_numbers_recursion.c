#include <stdio.h>

void printOdd(int current, int n)
{
    if (current > n)
        return;

    if (current % 2 != 0)
        printf("%d ", current);

    printOdd(current + 1, n);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printOdd(1, n);

    return 0;
}
