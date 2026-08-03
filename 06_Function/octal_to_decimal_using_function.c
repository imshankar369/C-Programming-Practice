#include <stdio.h>
#include <math.h>

int octalToDecimal(int n)
{
    int decimal = 0, i = 0;

    while(n != 0)
    {
        decimal += (n % 10) * pow(8, i);
        n /= 10;
        i++;
    }

    return decimal;
}

int main()
{
    int n;

    printf("Enter octal number: ");
    scanf("%d", &n);

    printf("Decimal = %d\n", octalToDecimal(n));

    return 0;
}
