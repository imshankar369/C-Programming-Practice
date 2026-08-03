#include <stdio.h>

int decimalToOctal(int n)
{
    int octal = 0, place = 1;

    while(n != 0)
    {
        octal += (n % 8) * place;
        n /= 8;
        place *= 10;
    }

    return octal;
}

int main()
{
    int n;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    printf("Octal = %d\n", decimalToOctal(n));

    return 0;
}
