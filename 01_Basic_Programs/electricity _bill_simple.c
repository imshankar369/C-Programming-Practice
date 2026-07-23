#include <stdio.h>

int main()
{
    int unit;
    float bill;

    printf("Enter Unit: ");
    scanf("%d", &unit);

    bill = unit * 8;

    printf("Electricity Bill = %.2f Taka\n", bill);

    return 0;
}
