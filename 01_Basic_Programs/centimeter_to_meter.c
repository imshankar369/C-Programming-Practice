#include <stdio.h>

int main()
{
    float centimeter;

    printf("Enter centimeter: ");
    scanf("%f", &centimeter);

    printf("Meter = %.2f\n", centimeter / 100);

    return 0;
}
