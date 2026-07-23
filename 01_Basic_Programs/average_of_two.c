#include <stdio.h>

int main()
{
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Average = %.2f\n", (a + b) / 2);

    return 0;
}
