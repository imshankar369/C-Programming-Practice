#include <stdio.h>

int main()
{
    float inches;

    printf("Enter inches: ");
    scanf("%f", &inches);

    printf("Feet = %.2f\n", inches / 12);

    return 0;
}
