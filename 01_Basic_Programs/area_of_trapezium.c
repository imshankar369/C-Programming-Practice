#include <stdio.h>

int main()
{
    float a, b, height, area;

    printf("Enter first parallel side: ");
    scanf("%f", &a);

    printf("Enter second parallel side: ");
    scanf("%f", &b);

    printf("Enter height: ");
    scanf("%f", &height);

    area = 0.5 * (a + b) * height;

    printf("Area = %.2f\n", area);

    return 0;
}
