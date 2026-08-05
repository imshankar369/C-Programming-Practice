#include <stdio.h>

int product(int n)
{
    if(n == 1)
        return 1;

    return n * product(n - 1);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Product = %d\n", product(n));

    return 0;
}
