#include <stdio.h>

int main()
{
    float side, perimeter;

    printf("Enter the side of the square: ");
    scanf("%f", &side);

    perimeter = 4 * side;

    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
