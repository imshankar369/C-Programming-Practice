#include <stdio.h>

int main()
{
    float feet;

    printf("Enter feet: ");
    scanf("%f", &feet);

    printf("Inches = %.2f\n", feet * 12);

    return 0;
}
