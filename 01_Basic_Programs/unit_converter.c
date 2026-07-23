#include <stdio.h>

int main()
{
    float meter, centimeter;

    printf("Enter meter: ");
    scanf("%f", &meter);

    centimeter = meter * 100;

    printf("%.2f meter = %.2f centimeter\n", meter, centimeter);

    return 0;
}
