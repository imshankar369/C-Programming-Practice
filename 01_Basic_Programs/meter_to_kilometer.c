#include <stdio.h>

int main()
{
    float meter;

    printf("Enter meter: ");
    scanf("%f", &meter);

    printf("Kilometer = %.2f\n", meter / 1000);

    return 0;
}
