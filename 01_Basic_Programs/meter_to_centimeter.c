#include <stdio.h>

int main()
{
    float meter;

    printf("Enter meter: ");
    scanf("%f", &meter);

    printf("Centimeter = %.2f\n", meter * 100);

    return 0;
}
