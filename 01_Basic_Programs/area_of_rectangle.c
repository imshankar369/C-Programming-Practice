#include <stdio.h>

int main()
{
    float l, w, area;

    printf("Enter length: ");
    scanf("%f", &l);

    printf("Enter width: ");
    scanf("%f", &w);

    area = l * w;

    printf("Area = %.2f\n", area);

    return 0;
}
