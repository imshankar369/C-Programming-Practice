#include <stdio.h>

int main()
{
    float kilometer;

    printf("Enter kilometer: ");
    scanf("%f", &kilometer);

    printf("Meter = %.2f\n", kilometer * 1000);

    return 0;
}
