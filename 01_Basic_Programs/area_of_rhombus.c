#include <stdio.h>

int main()
{
    float diagonal1, diagonal2, area;

    printf("Enter first diagonal: ");
    scanf("%f", &diagonal1);

    printf("Enter second diagonal: ");
    scanf("%f", &diagonal2);

    area = 0.5 * diagonal1 * diagonal2;

    printf("Area = %.2f\n", area);

    return 0;
}
