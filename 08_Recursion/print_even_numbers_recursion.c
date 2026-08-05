#include <stdio.h>

void printEven(int current, int n)
{
    if (current > n)
        return;

    if (current % 2 == 0)
        printf("%d ", current);

    printEven(current + 1, n);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printEven(1, n);

    return 0;
}
