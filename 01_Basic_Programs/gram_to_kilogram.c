#include <stdio.h>

int main()
{
    float gram;

    printf("Enter gram: ");
    scanf("%f", &gram);

    printf("Kilogram = %.2f\n", gram / 1000);

    return 0;
}
